#include <stdio.h>
int main(){
    char s[999];
    scanf("%s",&s);
    int i,sum=0;
    for(i=0;1==1;i++){
        if(s[i]=='\0'){
            break;
        }
        if(s[i]=='M'){
            sum=sum+1000;
        }
        if(s[i]=='D'){
            sum=sum+500;
        }
        if(s[i]=='L'){
            sum=sum+50;
        }
        if(s[i]=='V'){
            sum=sum+5;
        }
        if(s[i]=='C'){
            if(s[i+1]=='D'){
                sum=sum+400;
                i++;
            }else
            if(s[i+1]=='M'){
                sum=sum+900;
                i++;
            }else{
            sum=sum+100;
            }
        }
        if(s[i]=='X'){
            if(s[i+1]=='L'){
                sum=sum+40;
                i++;
            }else
            if(s[i+1]=='C'){
                sum=sum+90;
                i++;
            }else{
                sum=sum+10;
            }
        }
        if(s[i]=='I'){
            if(s[i+1]=='V'){
                sum=sum+4;
                i++;
            }else
            if(s[i+1]=='X'){
                sum=sum+9;
                i++;
            }else{
                sum=sum+1;
            }
        }
    }
printf("%d",sum);
return sum;
}