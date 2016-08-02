#include <stdio.h>

int main() {
	int num;
	printf("Enter N : ");
	scanf("%d",&num);
	
	int i,j;
	for(j=1;j<=num;j++){
		for(i=1;i<=j;i++){
			int let=64+i;
			printf("%c",let);
			
			
		}
		printf("\n");
	} 
	
	int k,l;
	for(k=num-1;k>=1;k--){
		for(l=1;l<=k;l++){
			int a=64+l;
			printf("%c",a);
		}
		printf("\n");
		
	}
	
	
	
	
	
	return 0;
	
}
