//
// Created by liu on 2022/12/15.
//
#include<cstdio>

const int MAXN = 1e7;
int prime[MAXN + 1];
bool visit[MAXN + 1];

int E_sieve(int n) {
    for (int i = 0; i <= n; i++) {
        visit[i] = false;
    }
    for(int i=2;i*i<=n;i++){
        if(!visit[i]){
            for(int j=i*i;j<=n;j+=i){
                visit[j]= true;
            }
        }
    }
    int k=0;
    for(int i=2;i<=n;i++){
        if(!visit[i]){
            prime[k++]=i;
        }
    }
    return k;
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d", E_sieve(n));
}