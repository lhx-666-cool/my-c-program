#include<stdio.h>
int main(){
    char p[]={'1','2','3'};
    char *q=p;
    printf("%d\n",sizeof(p));
    printf("%d\n",sizeof(*q));
    printf("%d\n",sizeof(p[0]));
    printf("%d\n",sizeof(char));
}