#include<stdio.h>
char bianhuan(char ch){
    if (ch>='a'&&ch<='z'){
        ch=ch-32;
    }else
    if(ch>='A'&&ch<='Z'){
        ch=ch+32;
    }else
    if(ch>='0'&&ch<='9'){
        ch='*';
    }else{
        ch='@';
    }
    return ch;
}
int main(){
    int c1,c2,c3,c4;
    scanf("%c%c%c%c",&c1,&c2,&c3,&c4);
    c1=bianhuan(c1);
    c2=bianhuan(c2);
    c3=bianhuan(c3);
    c4=bianhuan(c4);
    printf("%c%c%c%c",c1,c2,c3,c4);

}