#include<stdio.h>
int main(){
    int n;
    double a[99];
    double b[99];
    double sum=0;
    a[0]=2;a[1]=3;
    b[0]=1;b[1]=2;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        if(i>=2){
            a[i]=a[i-1]+a[i-2];
            b[i]=b[i-1]+b[i-2];
        }
        sum=sum+a[i]/b[i];
    }
    printf("%.2f",sum);
}