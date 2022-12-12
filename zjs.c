#include <stdio.h>
int main(){
  int a;
  int b;
  scanf("%d%d",&a,&b);
  float PI;
  PI=3.1415926;
  float w1,w2;
  w1= (a/20.0)*(a/20.0)*(a/20.0)*7.86;
  w2= (4/3)*PI*(b/20.0)*(b/20.0)*(b/20.0)*19.3;
  printf("%.3f %.3f",w1,w2);
  return 0;
 }