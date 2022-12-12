#include <stdio.h>
int main(){
    float m[999];
    int i ,n;
    i=0;
    n=0;
    while (1==1)
    {
        scanf("%f",&m[i]);
        i++;
        if(m[i-1]==0){
            break;
        }
    }
    while (n<i-1)
    {
        
        m[n] = m[n]/400;
        printf("%.1f ",m[n]);
        n++;
    }
    
    

}