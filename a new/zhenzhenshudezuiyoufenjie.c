//
// Created by liu on 2022/11/5.
//
#include "stdio.h"
#include "math.h"
int main(){
    int x;
//    int cishu=0;
    scanf("%d",&x);
    if(x%2==1){
        printf("-1");
    }
    else{
        for(int i=0;pow(2,i)<=x;i++){
            if(x==pow(2,i)){
                printf("%d",x);
                goto re;
            }
        }
        for(int i=1;pow(2,i)<=x;i++){
            int j=x- pow(2,i);
            for(int k=1;pow(2,k)<=x;k++){
                if(j==pow(2,k)){
                    printf("%.0f %.0f", pow(2,k), pow(2,i));
//                    cishu++;
                    goto re;
                }

            }

        }
        printf("-1");
    }
    re:return 0;
}