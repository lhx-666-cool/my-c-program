#include <stdio.h>
int main (){
    int time[99];
    int i= 0;
    while (i <= 2)
    {
        scanf("%d",&time[i]);
        i++;
        if(time[i-1] == 0){
            break;
        }
    }
}