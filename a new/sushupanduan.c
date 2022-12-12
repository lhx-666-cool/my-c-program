#include "stdio.h"
int function (int x) {
    int ii = 0;
    int ci = 0;
    for (ii = 1; ii <= x; ii++) {
        if (x % ii == 0) {
            ci++;
        }
    }
    if (ci == 2) {
        return 1;
    } else {
        return 2;
    }
}
int main(){
    int x;
    scanf("%d",&x);
    if(function(x)==1){
        printf("YES");
    }else{
        printf("NO");
    }
}