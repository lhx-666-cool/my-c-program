#include <stdio.h>
int main() {
    char shuru[999];
    scanf("%s", &shuru);
    int i = 0;
    for (i = 0;1;i++) {
        switch (shuru[i])
        {
        case '-':printf("fu ");break;
        case '1':printf("yi ");break;
        case '2':printf("er ");break;
        case '3':printf("san ");break;
        case '4':printf("si ");break;
        case '5':printf("wu ");break;
        case '6':printf("liu ");break;
        case '7':printf("qi ");break;
        case '8':printf("ba ");break;
        case '9':printf("jiu ");break;
        case '0':printf("ling ");break;
        case 0:goto jieshu;break;
        }
    }
jieshu:return 0;
}