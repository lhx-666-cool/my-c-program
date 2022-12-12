#include<stdio.h>

int main() {
    int y, d, yue, ri;
    scanf("%d %d", & y, & d);
    if (y%4 == 0&&y%100!=0||y%400==0) {
        if (d <= 31) {
            yue = 1;
            ri = d;
        }
        if (d > 31 && d <= 60) {
            yue = 2;
            ri = d - 31;
        }
        if (d > 60 && d <= 91) {
            yue = 3;
            ri = d - 60;
        }
        if (d > 91 && d <= 121) {
            yue = 4;
            ri = d - 91;
        }
        if (d > 121 && d <= 152) {
            yue = 5;
            ri = d - 121;
        }
        if (d > 152 && d <= 182) {
            yue = 6;
            ri = d - 152;
        }
        if (d > 182 && d <= 213) {
            yue = 7;
            ri = d - 182;
        }
        if (d > 213 && d <= 244) {
            yue = 8;
            ri = d - 213;
        }
        if (d > 244 && d <= 274) {
            yue = 9;
            ri = d - 244;
        }
        if (d > 274 && d <= 305) {
            yue = 10;
            ri = d - 274;
        }
        if (d > 305 && d <= 335) {
            yue = 11;
            ri = d - 305;
        }
        if (d > 335 && d <= 366) {
            yue = 12;
            ri = d - 335;
        }
    } else {
        if (d <= 31) {
            yue = 1;
            ri = d;
        }
        if (d > 31 && d <= 59) {
            yue = 2;
            ri = d - 31;
        }
        if (d > 59 && d <= 90) {
            yue = 3;
            ri = d - 59;
        }
        if (d > 90 && d <= 120) {
            yue = 4;
            ri = d - 90;
        }
        if (d > 120 && d <= 151) {
            yue = 5;
            ri = d - 120;
        }
        if (d > 151 && d <= 181) {
            yue = 6;
            ri = d - 151;
        }
        if (d > 181 && d <= 212) {
            yue = 7;
            ri = d - 181;
        }
        if (d > 212 && d <= 243) {
            yue = 8;
            ri = d - 212;
        }
        if (d > 243 && d <= 273) {
            yue = 9;
            ri = d - 243;
        }
        if (d > 273 && d <= 304) {
            yue = 10;
            ri = d - 273;
        }
        if (d > 304 && d <= 334) {
            yue = 11;
            ri = d - 304;
        }
        if (d > 334 && d <= 365) {
            yue = 12;
            ri = d - 334;
        }
    }
    printf("%d %d",yue,ri);
}