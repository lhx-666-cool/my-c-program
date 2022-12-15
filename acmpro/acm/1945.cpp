//
// Created by liu on 2022/12/15.
//
#include <bits/stdc++.h>
using namespace std;
int main(){
    int k=1;
    string s="iiii";
    /*----------------*/
    int x=0;
    for(int i=0;s[i]!=0;i++){
        int inp=0;
        inp=s[i]-'a'+1;
        x+=inp%10+inp/10;
    }
    for(int i=1;i<k;i++){
        int nx=0;
        while (x>0){
            nx=nx+x%10;
            x/=10;
        }
        x=nx;
    }
    printf("%d",x);
}