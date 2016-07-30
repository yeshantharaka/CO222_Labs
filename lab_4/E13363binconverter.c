#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argv,char **argr) {
	int i=0;
	if(argr[1][1]=='H' && argr[2][1]=='B'){
		while(i<=7) {                 // convert H to B
			switch(argr[3][i]) {
				case'0':printf("0000");break;
				case'1':printf("0001");break;
				case'2':printf("0010");break;
				case'3':printf("0011");break;
				case'4':printf("0100");break;
				case'5':printf("0101");break;
				case'6':printf("0110");break;
				case'7':printf("0111");break;
				case'8':printf("1000");break;
				case'9':printf("1001");break;
				case'A':printf("1010");break;
				case'B':printf("1011");break;
				case'C':printf("1100");break;
				case'D':printf("1101");break;
				case'E':printf("1110");break;
				case'F':printf("1111");break;
			}
			i++;
			
		}
	}
	if(argr[1][1]=='H' && argr[2][1]=='H'){      //convert H to H
		printf("%s",argr[3]);
	}
	
	if(argr[1][1]=='B' && argr[2][1]=='B'){      // convert Bto B
		printf("%s",argr[3]);
	}
	
	if(argr[1][1]=='I' && argr[2][1]=='I'){      // convert I to I
		printf("%s",argr[3]);
	}
	
	if(argr[1][1]=='F' && argr[2][1]=='F'){     // convert F to F
		printf("%s",argr[3]);
	}
	
	
	if(argr[1][1]=='I' && argr[2][1]=='F'){    // convert I to F
		printf("%s.00",argr[3]);
	}
	
	int sum=0;
	int j;
	int l;
	if(argr[1][1]=='B' && argr[2][1]=='I'){    // convert B to I
		
		for(j=31,l=0;j>=0;j--,l++){ 
			
			int k = pow(2,j);
			char c[1] = {argr[3][l],'\0'};
			int m=k* atoi(c);
			sum=sum+m;
		}
		printf("%d",sum);
	}
	
	if(argr[1][1]=='F' && argr[2][1]=='I'){    // convert F to I
	int o=(int)atof(argr[3]);
	printf("%d",o);
	}	
	
	 sum=0;
	if(argr[1][1]=='H' && argr[2][1]=='I'){    // convert H to I
		 for(j=7,l=0;j>=0;j--,l++){ 
			int p = pow(2,j);
			char d[1] = {argr[3][l],'\0'};
			int q;
			if(argr[3][l] == 'A'){
				q=10 * p;
			}else if(argr[3][l] == 'B'){
				q=11 * p;
			}else if(argr[3][l] == 'C'){
				q=12 * p;
			}else if(argr[3][l] == 'D'){
				q=13 * p;
			}else if(argr[3][l] == 'E'){
				q=14 * p;
			}else if(argr[3][l] == 'F'){
				q=15 * p;
			}else{
				q=p * atoi(d);
			}
			sum=sum+q;
		}
		printf("%d",sum);
	}
	
	sum=0;
	if(argr[1][1]=='B' && argr[2][1]=='F'){    // convert B to F
		
		for(j=31,l=0;j>=0;j--,l++){ 
			
			int k = pow(2,j);
			char c[1] = {argr[3][l],'\0'};
			int m=k* atoi(c);
			sum=sum+m;
		}
		printf("%d.00",sum);
	}
	
	
	
	return 0;
}
