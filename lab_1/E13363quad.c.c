#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() { 
	int a,b,c;
	printf("Enter the coefficients: ");
	scanf("%d %d %d",&a,&b,&c);
	int j=abs(b*b-4*a*c);
	float d=sqrt(j);
	float e=-b+d;
	float f=-b-d;
	float g=2*a;
	float h=e/g;
	float i=f/g;
	float k=(b*b-4*a*c);
	float m=-b/g;
	float n=d/g;
	
	if (k>0){
		printf("The solutions are: %.2f and %.2f\n",h,i);
	} else if(k == 0){
		printf("The solution is: %.2f\n",m);
	}else {
		if(b!=0){
			printf("The solutions are: %.2f - %.2fi and %.2f + %.2fi\n",m,n,m,n);
		}else{
			printf("The solutions are: -%.2fi and %.2fi\n",n,n);
		}
	}
	
	
	
	return 0;
	
}
