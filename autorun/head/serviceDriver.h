
#include "mytable.h"
#include "fileDescription.h"
#include "timeStamp.h"
#include "logon.h"
#include <cstring>

//
void mystrcat(char* a,const char* b)
{
    //a 不能存着字符串常量，而应该是字符数组。字符串常量c++不允许进行修改！ 
    for(int i=0;;i++){
        if(a[i]=='\0'){
            for(int j=0;b[j]!='\0';j++){
                a[i] = b[j];
                i++;
            }
            a[i] ='\0';
            break;
        }
    }
}
bool mystrcmp(const char* a,const char* b){
    for(int i=0;;i++){
        if(a[i] != b[i])  return false;
        else{
            if(a[i] =='\0') return true;
        }
    }
}

void initSerDri(mytable *ser,mytable *dri){
    mytable * Service;
    mytable * Driver;
    HKEY hKey;
    HKEY hSubKey;
    char* path = "System\\CurrentControlSet\\Services\\";
    ser->appenIntro("HKLM\\System\\CurrentControlSet\\Services");
    dri->appenIntro("HKLM\\System\\CurrentControlSet\\Services");
    cout<<"@";
    if( RegOpenKeyEx( HKEY_LOCAL_MACHINE,
                TEXT(path),
                0,
                KEY_READ,
                &hKey) == ERROR_SUCCESS
        ){
             TCHAR    achKey[MAX_KEY_LENGTH];   // buffer for subkey name
            DWORD    cbName;                   // size of name string 
            TCHAR    achClass[MAX_PATH] = TEXT("");  // buffer for class name 
            DWORD    cchClassName = MAX_PATH;  // size of class string 
            DWORD    cSubKeys=0;               // number of subkeys 
            DWORD    cbMaxSubKey;              // longest subkey size 
            DWORD    cchMaxClass;              // longest class string 
            DWORD    cValues=0;              // number of values for key 
            DWORD    cchMaxValue;          // longest value name 
            DWORD    cbMaxValueData;       // longest value data 
            DWORD    cbSecurityDescriptor; // size of security descriptor 
            FILETIME ftLastWriteTime;      // last write time 
        
            DWORD i, j,retCode; 
        
            TCHAR  achValue[MAX_VALUE_NAME]; 
            DWORD cchValue = MAX_VALUE_NAME; 

            LPDWORD lpType;
            LPBYTE  lpData ;
            LPDWORD lpcbData;
            BYTE  achData[MAX_VALUE_NAME];
            DWORD cchData = MAX_VALUE_NAME;
            DWORD type;

            HANDLE     hFile;
            FILETIME *lpLastWriteTime;
            SYSTEMTIME  *lpSystemTime;
            // Get the class name and the value count. 
            retCode = RegQueryInfoKey(
                hKey,                    // key handle 
                achClass,                // buffer for class name 
                &cchClassName,           // size of class string 
                NULL,                    // reserved 
                
                &cSubKeys,               // number of subkeys 
                &cbMaxSubKey,            // longest subkey size 
                &cchMaxClass,            // longest class string 

                &cValues,                // number of values for this key 
                &cchMaxValue,            // longest value name 
                &cbMaxValueData,         // longest value data 
                &cbSecurityDescriptor,   // security descriptor 
                &ftLastWriteTime);       // last write time 
            // cout<<"cSubKeys is "<<cSubKeys<<endl;
            // printf("cSubKeys is %d\n",cSubKeys);
            // printf("cValues is %d\n",cValues);
            // cout<<"cValues is "<<cValues<<endl;
            // Enumerate the subkeys, until RegEnumKeyEx fails.

            if (cSubKeys)
            {
                printf( "\nNumber of subkeys: %d\n", cSubKeys);

                for (i=0; i<cSubKeys; i++) 
                { 
                    cbName = MAX_KEY_LENGTH;
                    retCode = RegEnumKeyEx(
                                            hKey, 
                                            i,
                                            achKey, 
                                            &cbName, //返回achkey的大小,字节为单位
                                            NULL, 
                                            NULL, 
                                            NULL, 
                                            &ftLastWriteTime); 
                    if (retCode == ERROR_SUCCESS) 
                    {
                        //整理出子键的路径
                        char subpath[MAX_KEY_LENGTH] = "System\\CurrentControlSet\\Services\\";//for子键的路径
                        mystrcat(subpath,achKey);
                        cout<<subpath<<endl;
                        //访问子键并列出相关的values
                        if( RegOpenKeyEx( HKEY_LOCAL_MACHINE,
                                    TEXT(subpath),
                                    0,
                                    KEY_READ,
                                    &hSubKey) == ERROR_SUCCESS
                                    ){
                                        //循环读取values
                                        int isDriver = -1;
                                        int isService = -1;
                                        BYTE  exepath[MAX_VALUE_NAME];
                                        DWORD execch= 0;
                                        for(j=0,retCode=ERROR_SUCCESS;;j++){
                                            cchValue = MAX_VALUE_NAME; 
                                            cchData = MAX_VALUE_NAME;
                                            achValue[0] = '\0';
                                            achData[0] = '\0';
                                            retCode = RegEnumValue(
                                                                    hSubKey,
                                                                    j, 
                                                                    achValue, 
                                                                    &cchValue,
                                                                    NULL, 
                                                                    &type,
                                                                    achData,
                                                                    &cchData);
                                           if(retCode == ERROR_SUCCESS){
                                                //判断读取的是否是start，path，或者type
                                                if(mystrcmp(achValue,"Start")){
                                                    isService = achData[0];
                                                    //cout<<"service is "<<isService<<endl;
                                                }
                                                if(mystrcmp(achValue,"Type")){
                                                    isDriver =  achData[0];
                                                    // cout<<"driver is "<<isDriver<<endl;
                                                }
                                                if(mystrcmp(achValue,"ImagePath")){
                                                    int k;
                                                    for(k = 0;k < cchData;k++){
                                                        exepath[k] = achData[k];
                                                    }
                                                    exepath[k] = '\0';
                                                    //cout<<"@exepath "<<exepath<<endl;
                                                    execch = cchData;
                                                }
                                                cout<<"@achValue "<<" "<<achValue<<endl;
                                                //cout<<"@achData"<<" "<<achData<<endl;//打印的如果是REG_BINARY会溢出！！！然后出现莫名其妙的错误。
                                            }
                                            else{
                                                cout<<retCode<<endl;
                                                cout<<"reading values end"<<endl;
                                                break;
                                            }
                                        }
                                        if(isService <=3 &&isService>=0){
                                            //cout<<"achdata type is "<<type<<endl;
                                            char* path;
                                            path= new char[MAX_VALUE_NAME];
                                            char description[MAX_VALUE_NAME];
                                            char publisher[MAX_VALUE_NAME];
                                            char timestamp[MAX_VALUE_NAME];
                                            byte2charx(exepath,execch,path);
                                            //cout<<"result is "<<result<<endl;
                                            //标准化路径
                                            char spath[MAX_VALUE_NAME];
                                            getPath(path,spath);

                                            //获取文件的描述和发布者
                                            get_file_info(spath,"FileDescription",description);
                                            cout<<"the item description is"<<description<<endl;
                                            get_file_info(spath,"CompanyName",publisher);

                                            //获取文件的时间戳
                                            get_time_stamp(spath,timestamp);
                                            //写入driver表
                                            if(isDriver == 1||isDriver == 2||isDriver == 4||isDriver == 8){
                                                ser->appendRow(achKey,description,publisher,spath,timestamp);
                                            }
                                            else{
                                                //写入service表
                                                dri->appendRow(achKey,description,publisher,spath,timestamp);
                                            }
                                            delete [] path;
                                        }
                                        //关闭键
                                        RegCloseKey(hSubKey);
                                    }
                        else {
                            cout<<"open \""<<subpath<<"\" wrong"<<endl;
                        }

                        _tprintf(TEXT("(%d) %s\n"), i+1, achKey);

                        
                    }
                }
            }
            RegCloseKey(hKey);
        }
    else
    {
        cout<<"open services path falsed"<<endl;
    }
}


// int main(){
//     mytable a,b;
//     initSerDri(&a,&b);
//     a.printTable();
//     b.printTable();
//     return 1;
// }
