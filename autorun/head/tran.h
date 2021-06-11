#ifndef _TRAN_H
#define _TRAN_H

#include <iostream>
#include "string.h"
#include "windows.h"

void byte2charx(BYTE *a,int size,char* b){
    int i=0;
    for(;i<size;i++){
        b[i] = a[i];
        //cout<<"a["<<i<<"]="<<a[i]<<endl;
    }
    b[i]='\0';
}


void mystrcat(char* a,const char* b){
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

#endif
