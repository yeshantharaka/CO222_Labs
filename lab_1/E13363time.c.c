#include <stdio.h>

int main(){
	int a;
	printf("Enter the start time:  ");
	scanf("%d",&a);
	int b;
	printf("Enter the time duration:  ");
	scanf("%d",&b);
	int c=a%100;
	int d=a/100;
	int e=b/100;
	int f=b%100;
	int g=c+f;
	int h=g/60;
	int i=g%60;
	int j=d+e+h;
	int k=(j-24);
	
	if (j<24) {
		
			printf("End time is %02d%02d.\n",j,i);
		
			
			
	}else {
			
			printf("End time is %02d%02d.\n",k,i);
			
	}
		
	
	
	


	return 0;
}
