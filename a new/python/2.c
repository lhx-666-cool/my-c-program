#include<stdio.h>
int main(){
	int n;
	int i=0;
	scanf("%d",&n);
	if(n%2==0){
		n=n/2;
		i++;
	}
	else if(n%2!=0){
		n=n*3+1;
		i++;
	}
	else if(n==1){
		printf("%d",i);
	}
	
	
}

