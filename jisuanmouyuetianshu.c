#include<stdio.h>
int main()
{
 int a,b,day;
 scanf("%d %d",&a,&b);
 switch(b)
 {
  case 2:
      if(a%400==0||a%4==0&&a%100!=0)  day=29;
      else   day=28;
      break;
  case 1||3||5||7||8||10||12:day=31;break;
  case 4:day=30;break;
  case 6:day=30;break;
  case 9:day=30;break;
  case 11:day=30;break;
  default:day=0;break;
 } 
 if(day==0){
 }
 else{
 printf("%d",day);}
 return 0;
} 