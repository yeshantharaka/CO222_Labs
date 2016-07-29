#include <stdio.h>

int main() {
	int a,b,c;
	printf("Enter the color  :");
	scanf("%d %d %d",&a,&b,&c);
	
	int d=255-a;    // get coplement of a
	int e=255-b;    // get coplement of b
	int f=255-c;    //get oplement of c
	
	if(d>127 && d<160){
		d=d-128;       
	}
	if(e>127 && e<160){
		e=e-128;
	}
	if(f>127 && f<160){
		f=f-128;
	}
	if(d<128 && d>96) {
		d=128+d; 
	}
	if(e<128 && e>96) {
		e=128+e; 
	}
	if(f<128 && f>96) {
		f=128+f; 
	}
	printf("The complement: %d %d %d",d,e,f);
	
	
	
	return 0;
}
