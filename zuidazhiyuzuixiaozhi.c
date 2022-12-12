#include<stdio.h>
int maxf(int x,int y){
    int r;
    r=x> y? x:y;
    return r;

}
int minf(int x,int y){
        int r;
    r=x< y? x:y;
    return r;
}
int main(){
    int a,b,max,min;
    int q,w,e,r;
    scanf("%d %d",&a,&b);
    q=(a+b)*(a+b);
    w=(a-b)*(a-b);
    e=a*a+b*b;
    r=a*a-b*b;
    max=maxf(q,w);
    max=maxf(max,e);
    max=maxf(max,r);
    printf("%d",max);
    min=minf(q,w);
    min=minf(min,e);
    min=minf(min,r);
    printf(" %d",min);

}
