#include <stdio.h>
int main (){
    int a = 0, b = 0;
    int guo = 0;
    char f[] = "";
    scanf("%d%c%d",&a,&f[0],&b);
    if (f[0] == '+'){
        guo = a + b;
    }
    if (f[0] == '-'){
        guo = a-b;
    }
    if (f[0] == '*'){
        guo = a*b;
    }
    if (f[0] == '/'){
        guo = a/b;
    }
    if (f[0] == '%'){
        guo = a%b;
    }
    printf("%d%c%d=%d",a,f[0],b,guo);
 }