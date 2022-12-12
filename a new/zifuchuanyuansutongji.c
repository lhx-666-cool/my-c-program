//
// Created by liu on 2022/11/5.
//
#include "stdio.h"
int main(){
    char ch[99];
    scanf("%s",&ch);
    int zimu=0;
    int shuzi=0;
    for(int i=0;ch[i]!=0;i++){
        if(ch[i]>='0'&&ch[i]<='9'){
            shuzi++;
        }
        if(ch[i]>='a'&&ch[i]<='z'){
            zimu++;
        }
        if(ch[i]>='A'&&ch[i]<='Z'){
            zimu++;
        }
    }
    printf("%d,%d",zimu,shuzi);
}