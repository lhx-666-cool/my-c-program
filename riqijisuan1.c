#include<stdio.h>
int main(){
    int r1,y1,n1;
    int r2,y2,n2;
    scanf("%d/%d/%d",&y1,&r1,&n1);
    scanf("%d/%d/%d",&y2,&r2,&n2);
    if(n1<n2){
        printf("1");
    }
    if (n1==n2)
    {
        if(y1<y2){
            printf("1");
        }
        if(y1==y2){
            if(r1<r2){
                printf("1");
            }
            if(r1==r2){
                printf("0");
            }
            if (r1>r2)
            {
                printf("-1");
            }
            
        }
        if(y1>y2){
            printf("-1");
        }
    }
    if(n1>n2){
        printf("-1");
    }
    
}