#include<iostream>
int main() {
    char inp[] = "\\\'\054";
    printf("%d\n", sizeof inp);
    printf("%s", inp);
}