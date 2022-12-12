#include<stdio.h>
int main(){
    int a,b;
    char op;
    scanf("%d%c%d",&a,&op,&b);
    if(op=='+'){
        printf("%d",a+b);
    }else if(op=='-'){
        printf("%d",a-b);
    }else if(op=='*'){
        printf("%d",a*b);
    }else if(op=='/'){
        if(b==0){
            printf("Division by zero!");
        }else{
            printf("%d",a/b);
        }
    }
}