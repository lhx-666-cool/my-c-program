#include<stdio.h>
int main(){
	int n ,i=0,one=0,two=0,three=0,four=0,five=0,six=0,z;
	double p;
	char a;
	scanf("%d",&n);
	while(i<n){
		scanf("%d",&z);
		scanf("%c",&a);
		
		if(z>=0&&z<=50){one++;
		}
		if(z>51&&z<=100){two++;
		}
		if(z>101&&z<=150){three++;
		}
		if(z>151&&z<=200){four++;
		}
		if(z>201&&z<=300){five++;
		}
		if(z>300){six++;
		}
		p=p+z;
		i++;
		
	}
	printf("%.2f\n%d %d %d %d %d %d",p/n,one,two,three,four,five,six);

return 0;
}