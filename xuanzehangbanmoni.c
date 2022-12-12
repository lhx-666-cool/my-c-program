#include "stdio.h"
#include "math.h"

int main() {
    float shijian[9];
    shijian[0] = 99999;
    shijian[1] = 8.00;
    shijian[2] = 9.72;
    shijian[3] = 11.32;
    shijian[4] = 12.78;
    shijian[5] = 14.00;
    shijian[6] = 15.75;
    shijian[7] = 19.00;
    shijian[8] = 21.75;
    int shi;
    float min;
    float time;
    int ii;
    float min2=99;
    float cha;
    scanf("%d:%f",&shi,&min);
    time = shi+min/60;
    int i=0;
    for(;i<9;i++){
        cha = fabs(shijian[i]-time);
        if(cha>-0.1&&cha<=min2){
            min2=cha;
        }
    }
    i=0;
    for(;i<9;i++){
        cha = fabs(shijian[i]-time);
        if(cha==min2){
            // printf("%d",i);
            ii=i;
        }
    }
    switch (ii)
    {
        case 1:printf("8:00 a.m.-10:16 a.m.");break;
        case 2:printf("9:43 a.m.-11:52 a.m.");break;
        case 3:printf("11:19 a.m.-1:31 p.m.");break;
        case 4:printf("12:47 p.m.-3:00 p.m.");break;
        case 5:printf("2:00 p.m.-4:08 p.m.");break;
        case 6:printf("3:45 p.m.-5:55 p.m.");break;
        case 7:printf("7:00 p.m.-9:20 p.m.");break;
        case 8:printf("9:45 p.m.-11:58 p.m.");break;
    }

}