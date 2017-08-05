
#include <stdio.h>
int myatoi(char argrc);
double power(int pow1,int pow2);
int countargr(char *num);

int main(int argv,char **argr) {
	int j,l,g,h;
	
	int brk=countargr(argr[3]);
	if(argr[1][1]=='B'){                             // print the error
		int b1=countargr(argr[3]);
		if(b1==32){
			
		} else {
			printf("ERROR: The input size is wrong.\n");
			
		}
	}
	if(argr[1][1]=='H'){                             // print the error
		int h1=countargr(argr[3]);
		if(h1==8){
			
		} else {
			printf("ERROR: The input size is wrong.\n");
			
		}
	}
	if(argv==4){
	int i=0;
	 
	if((argr[1][1]=='H' && argr[2][1]=='H') || (argr[1][1]=='I' && argr[2][1]=='I') || (argr[1][1]=='B' && argr[2][1]=='B') || (argr[1][1]=='F' && argr[2][1]=='F') || (argr[1][1]=='D' && argr[2][1]=='D') ){       // take same answer
	printf("%s\n",argr[3]);	
	}
	if(brk==8){
	if((argr[1][1]=='H' && argr[2][1]=='B')){              // convert H to B
		while(i<=7){
			switch(argr[3][i]){
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
		printf("\n");
	}
	}
	
	/*int num1[64];     // convert char array to integer array
	
		for(j=0;j<=63;j++){
		num1[j]=myatoi(argr[3][j]);
		
	}
	for(j=0;j<=63;j++){
		printf("%d",num1[j]);
	}*/
	
	if(brk==32){
	if(argr[1][1]=='B' && argr[2][1]=='H'){                         // convert B to H
		int BtoH1,BtoH2,BtoH3,BtoH4;
		for(BtoH1=0,BtoH2=1,BtoH3=2,BtoH4=3; BtoH1<=28 && BtoH2<=29 && BtoH3<=30 && BtoH4<=31; BtoH1+=4,BtoH2+=4,BtoH3+=4,BtoH4+=4){
			if(argr[3][BtoH1]=='0' && argr[3][BtoH2]=='0' && argr[3][BtoH3]=='0' && argr[3][BtoH4]=='0'){
				printf("0");
			}
			if(argr[3][BtoH1]=='0' && argr[3][BtoH2]=='0' && argr[3][BtoH3]=='0' && argr[3][BtoH4]=='1'){
				printf("1");
			}
			if(argr[3][BtoH1]=='0' && argr[3][BtoH2]=='0' && argr[3][BtoH3]=='1' && argr[3][BtoH4]=='0'){
				printf("2");
			}
			if(argr[3][BtoH1]=='0' && argr[3][BtoH2]=='0' && argr[3][BtoH3]=='1' && argr[3][BtoH4]=='1'){
				printf("3");
			}
			if(argr[3][BtoH1]=='0' && argr[3][BtoH2]=='1' && argr[3][BtoH3]=='0' && argr[3][BtoH4]=='0'){
				printf("4");
			}
			if(argr[3][BtoH1]=='0' && argr[3][BtoH2]=='1' && argr[3][BtoH3]=='0' && argr[3][BtoH4]=='1'){
				printf("5");
			}
			if(argr[3][BtoH1]=='0' && argr[3][BtoH2]=='1' && argr[3][BtoH3]=='1' && argr[3][BtoH4]=='0'){
				printf("6");
			}
			if(argr[3][BtoH1]=='0' && argr[3][BtoH2]=='1' && argr[3][BtoH3]=='1' && argr[3][BtoH4]=='1'){
				printf("7");
			}
			if(argr[3][BtoH1]=='1' && argr[3][BtoH2]=='0' && argr[3][BtoH3]=='0' && argr[3][BtoH4]=='0'){
				printf("8");
			}
			if(argr[3][BtoH1]=='1' && argr[3][BtoH2]=='0' && argr[3][BtoH3]=='0' && argr[3][BtoH4]=='1'){
				printf("9");
			}
			if(argr[3][BtoH1]=='1' && argr[3][BtoH2]=='0' && argr[3][BtoH3]=='1' && argr[3][BtoH4]=='0'){
				printf("A");
			}
			if(argr[3][BtoH1]=='1' && argr[3][BtoH2]=='0' && argr[3][BtoH3]=='1' && argr[3][BtoH4]=='1'){
				printf("B");
			}
			if(argr[3][BtoH1]=='1' && argr[3][BtoH2]=='1' && argr[3][BtoH3]=='0' && argr[3][BtoH4]=='0'){
				printf("c");
			}
			if(argr[3][BtoH1]=='1' && argr[3][BtoH2]=='1' && argr[3][BtoH3]=='0' && argr[3][BtoH4]=='1'){
				printf("D");
			}
			if(argr[3][BtoH1]=='1' && argr[3][BtoH2]=='1' && argr[3][BtoH3]=='1' && argr[3][BtoH4]=='0'){
				printf("E");
			}
			if(argr[3][BtoH1]=='1' && argr[3][BtoH2]=='1' && argr[3][BtoH3]=='1' && argr[3][BtoH4]=='1'){
				printf("F");
			}
		}
		printf("\n");
	}
	}
	
	
	
	int sum1=0,sum2=0;
	if(brk==32){
	if(argr[1][1]=='B' && argr[2][1]=='I'){    // convert B to I
		if(argr[3][0]=='0'){
			for(j=31,l=0;j>=0;j--,l++){ 
				
				int k = power(2,j);
				char c = {argr[3][l]};
				int m=k* myatoi(c);
				sum1=sum1+m;
			}
			printf("%d\n",sum1);
		}else{
		
			if(argr[3][31] == '0'){
				
				for(j=30;j>=0;j--){
					if(argr[3][j] == '1'){
						argr[3][j] = '0';
						break;
					}else if(argr[3][j]=='0'){
						argr[3][j] = '1';
						continue;
					}
				}
				argr[3][31]='1';
			} else {
				argr[3][31]='0';
			}
			argr[3][32]=' ';
			
			for(j=0; j<=31; j++){
				if(argr[3][j]=='0'){
					argr[3][j]='1';
				
				} else if(argr[3][j]=='1'){
					argr[3][j]='0';
				}
			}
			
				
			
			for(j=31,l=0;j>=0;j--,l++){ 
				
				int a = power(2,j);
				char e = {argr[3][l]};
				int n=a* myatoi(e);
				sum2=sum2+n;
			}
			printf("-%d\n",sum2);
			
		}
	}
	}
	
	
	if(argr[1][1]=='I' && argr[2][1]=='B'){   // convert I to B
		int num7[32];
		int ib;
		int num3=countargr(argr[3]);   // call the function
        int sum3=0;
		for((j=num3-1); j>=0; j--){     // convert char array to int number
			int c=num3-(j+1);
			int num4=myatoi(argr[3][j]);
			int num5=num4*power(10,c);
			sum3=sum3+num5;
		}
		for(ib=0;ib<=31;ib++){
			num7[ib]=0;
		}
		
		l=31; 			
		while(sum3!=0){
			
			int num6=(sum3)%2;
					
			num7[l]=num6;
			sum3=(sum3)/2;
			
			
			l--;
		}
		
		for(g=0;g<=31;g++){
			printf("%d",num7[g]);
		}
		printf("\n");
		}
		
		
		if(argr[1][1]=='I' && argr[2][1]=='H'){       //convert I to H
			char IH[8];
			int v=0;
			int num8=countargr(argr[3]);     // call the function
			
			int sum4=0;
			for((j=num8-1); j>=0; j--){     // convert char array to int number
				int d=num8-(j+1);
				int num9=myatoi(argr[3][j]);
				int num0=num9*power(10,d);
				sum4=sum4+num0;
			}
			for(l=0;l<=7;l++){
				IH[l]='0';
			}
			int w=7;
			while(sum4!=0){
				v++;
				char y1;			
				int y = sum4 % 16;
				switch(y){
					case 0: y1='0';break;
					case 1: y1='1';break;
					case 2: y1='2';break;
					case 3: y1='3';break;
					case 4: y1='4';break;
					case 5: y1='5';break;
					case 6: y1='6';break;
					case 7: y1='7';break;
					case 8: y1='8';break;
					case 9: y1='9';break;
					case 10: y1='A';break;
					case 11: y1='B';break;
					case 12: y1='C';break;
					case 13: y1='D';break;
					case 14: y1='E';break;
					case 15: y1='F';break;
				}
				sum4=sum4/16;
				
				IH[w]=y1;
				
				
				w--;
			}
			for(l=0;l<=(7-v);l++){
				IH[l]='0';
				
			}
			
			printf("%s",IH);
			
			printf("\n");
		
		}
		
		
		
	if(argr[1][1]=='I' && argr[2][1]=='F'){      //convert I to F
		int num10=countargr(argr[3]);     // call the function
			
			float sum5=0;
			for((j=num10-1); j>=0; j--){     // convert char array to int number
				int e=num10-(j+1);
				int num11=myatoi(argr[3][j]);
				int num12=num11*power(10,e);
				sum5=sum5+num12;
			}
		printf("%.2f\n",sum5);
	}
	
	
	
	if(argr[1][1]=='I' && argr[2][1]=='D'){      // convert I to D
		int num13=countargr(argr[3]);     // call the function
			
			double sum6=0;
			for((j=num13-1); j>=0; j--){     // convert char array to int number
				int e=num13-(j+1);
				int num14=myatoi(argr[3][j]);
				int num15=num14*power(10,e);
				sum6=sum6+num15;
			}
		printf("%.6lf\n",sum6);
		
	}
	if(brk==8){
	double sum7=0,sum8=0;
	if(argr[1][1]=='H'){    // convert H to F  &   H to D  &  H to I
		int h2=0;
		int h3,h4,h5;
		 for(l=0;l<=7;l++){ 
			int h1=argr[3][l];
			if(h1==46){
				break;
			} else {
				h2++;
			}
		}
			for(j=(h2-1),h3=0;j>=0,h3<=(h2-1);j--,h3++){
			int r = power(16,j);
			char t = {argr[3][h3]};
			int s;
			if(argr[3][h3] == 'A'){
				s=10 * r;
			}else if(argr[3][h3] == 'B'){
				s=11 * r;
			}else if(argr[3][h3] == 'C'){
				s=12 * r;
			}else if(argr[3][h3] == 'D'){
				s=13 * r;
			}else if(argr[3][h3] == 'E'){
				s=14 * r;
			}else if(argr[3][h3] == 'F'){
				s=15 * r;
			}else{
				s=r * myatoi(t);
			}
			sum7=sum7+s;
		}
		for(h4=(h2+1),h5=(-1);h4<=(9-h2),h5>=(h2-8);h4++,h5--){
			double h6=power(16,h5);
			char h7={argr[3][h4]};
			double h8;
			if(argr[3][h4] == 'A'){
				h8=10 * h6;
			}else if(argr[3][h4] == 'B'){
				h8=11 * h6;
			}else if(argr[3][h4] == 'C'){
				h8=12 * h6;
			}else if(argr[3][h4] == 'D'){
				h8=13 * h6;
			}else if(argr[3][h4] == 'E'){
				h8=14 * h6;
			}else if(argr[3][h4] == 'F'){
				h8=15 * h6;
			}else{
				h8=h6 * myatoi(h7);
			}
			sum8=sum8+h8;
		}
		if(argr[2][1]=='F'){     // print H to F convertion
			printf("%.2lf\n",(sum7+sum8));
		}
		
		
		if(argr[2][1]=='I'){       // print H to I convertion
			printf("%.0lf\n",sum7);
		}
		if(argr[2][1]=='D'){        // print H to D convertion
			printf("%.6lf\n",(sum7+sum8));
		}
	}
	}
	int countfi=0;
	if((argr[1][1]=='F' && argr[2][1]=='I') || (argr[1][1]=='D' && argr[2][1]=='I')){    // convert F to I  &  D to I
		int fi4,fi3;
		int FI[10];
		for(j=0;j<=9;j++){
			FI[j]=0;
		}
		int fi1=countargr(argr[3]);
		for(l=0;l<=fi1;l++){
			int u=argr[3][l];
			if(u==46){
				break;
			} else{
				FI[(9-l)]=myatoi(argr[3][l]);
				countfi++;
			}
			
		}
		
		int FI1[countfi];
		for(fi4=0,fi3=9;fi4<=(countfi-1),fi3>=(10-countfi);fi4++,fi3--){
			FI1[fi4]=FI[fi3];
		}
		
		for(g=(countfi-1),h=0;g>=0,h<=(countfi-1);g--,h++){
			int fi2=FI1[g]*power(10,h);
			sum1=sum1+fi2;
		}
		printf("%d\n",sum1);
	}
	
	
	if(argr[1][1]=='F' && argr[2][1]=='D'){     // convert F to D
		printf("%s0000",argr[3]);
	}
	
	
	if(argr[1][1]=='D' && argr[2][1]=='F'){     // convert D to F
		int df=countargr(argr[3]);
		for(j=0;j<=(df-5);j++){
			printf("%c",argr[3][j]);
		}
		
	}
	
	int sumfh1=0;
	double sumfh2=0;
	if(argr[2][1]=='H'){    // convert F to H  &  D to H
		int fh4,fh5,fh9;
		int fh=countargr(argr[3]);
		char FH1[7];
		char FH2[6];
		char FH3[2];
		int fh2=0,fh7=6;
		for(j=0;j<=6;j++){
			FH1[j]='0';
		}
		for(l=0;l<=(fh-1);l++){
			int fh1=argr[3][l];
			if(fh1==46){
				break;
			} else {
				fh2++;
			}
		}
		for(g=0,h=(fh2-1);g<=(fh2-1),h>=0;g++,h--){
			int fh3=myatoi(argr[3][h])*power(10,g);
			sumfh1=sumfh1+fh3;
		}
		while(sumfh1!=0){
			int fh6=sumfh1%16;
			char fh8;
			switch(fh6){
					case 0: fh8='0';break;
					case 1: fh8='1';break;
					case 2: fh8='2';break;
					case 3: fh8='3';break;
					case 4: fh8='4';break;
					case 5: fh8='5';break;
					case 6: fh8='6';break;
					case 7: fh8='7';break;
					case 8: fh8='8';break;
					case 9: fh8='9';break;
					case 10: fh8='A';break;
					case 11: fh8='B';break;
					case 12: fh8='C';break;
					case 13: fh8='D';break;
					case 14: fh8='E';break;
					case 15: fh8='F';break;
				}
			FH1[fh7]=fh8;
			fh7--;
			sumfh1=sumfh1/16;	
		}
		for(fh5=(-1),fh9=(fh-2);fh5>=(-2),fh9<=(fh-1);fh5--,fh9++){
			double fh0=myatoi(argr[3][fh9])*power(10,fh5);
			sumfh2=sumfh2+fh0;
		}
		for(j=0;j<=5;j++){
			int fh10=sumfh2*16;
			double fh11=sumfh2*16;
			double fh12=fh11-fh10;
			char fh13;
			switch(fh10){
					case 0: fh13='0';break;
					case 1: fh13='1';break;
					case 2: fh13='2';break;
					case 3: fh13='3';break;
					case 4: fh13='4';break;
					case 5: fh13='5';break;
					case 6: fh13='6';break;
					case 7: fh13='7';break;
					case 8: fh13='8';break;
					case 9: fh13='9';break;
					case 10: fh13='A';break;
					case 11: fh13='B';break;
					case 12: fh13='C';break;
					case 13: fh13='D';break;
					case 14: fh13='E';break;
					case 15: fh13='F';break;
				}
			FH2[j]=fh13;
			
			sumfh2=fh12;	
		}
		
		if(argr[1][1]=='D'){             // print D to H convertion
			printf("%s.%s\n",FH1,FH2);
		}
		if(argr[1][1]=='F'){            //print F to H convertion
			for(l=0;l<=1;l++){
				FH3[l]=FH2[l];
			}
			printf("%s.%s\n",FH1,FH3);
		}
	}
	
	if(brk==32){
	if(argr[1][1]=='B' && argr[2][1]=='F'){    // convert B to F
		
		int BF[24];
		int sumbf=0,sumbf1=0;
		double sumbf2=0,sumbf3=0,sumbf4=0;
		int bf3;
		BF[0]=1;
		for(j=31;j>=9;j--){
			BF[j-8]=myatoi(argr[3][j]);
	
		}
		
		for(l=8;l>=1;l--){
			int bf=myatoi(argr[3][l])*power(2,(8-l));
			sumbf=sumbf+bf;
		}
		int bf1=sumbf-127;
		
		if(bf1>=0){
			for(g=0;g<=bf1;g++){
				double bf2=BF[g]*power(2,(bf1-g));
				sumbf1=sumbf1+bf2;
			}
			
			for(h=(bf1+1),bf3=(-1);h<=23,bf3>=(bf1-23);h++,bf3--){
				int bf4=BF[h]*power(2,bf3);
				sumbf2=sumbf2+bf4;
			}
			sumbf3=sumbf1+sumbf2;
			
			if(argr[3][0]=='0'){
				printf("%.2lf",sumbf3);
			} else if(argr[3][0]=='1'){
				printf("-%.2lf",sumbf3);
			}
			
		} else if(bf1<0) {
			for(j=0,l=bf1;j<=23,l>=(bf1-23);j++,l--){
				double bf5=BF[j]*power(2,l);
				sumbf4=sumbf4+bf5;
			}
			
				if(argr[3][0]=='0'){
				printf("%.2lf",sumbf4);
			} else if(argr[3][0]=='1'){
				printf("-%.2lf",sumbf4);
			}
		}
		
	}
	}
	
	
	int sumfb1=0;
	double sumfb2=0;
	if(argr[2][1]=='B'){    // convert F to B  &  D to B
		int fb4,fb5,fb9;
		int fb=countargr(argr[3]);
		char FB1[32];
		char FB2[6];
		char FB3[2];
		int fb2=0,fb7=31;
		for(j=0;j<=31;j++){
			FB1[j]='0';
		}
		for(l=0;l<=(fb-1);l++){
			int fb1=argr[3][l];
			if(fb1==46){
				break;
			} else {
				fb2++;
			}
		}
		for(g=0,h=(fb2-1);g<=(fb2-1),h>=0;g++,h--){
			int fb3=myatoi(argr[3][h])*power(10,g);
			sumfb1=sumfb1+fb3;
		}
		while(sumfb1!=0){
			int fb6=sumfb1%2;
			char fb8;
			switch(fb6){
					case 0: fb8='0';break;
					case 1: fb8='1';break;
					}
			FB1[fb7]=fb8;
			fb7--;
			sumfb1=sumfb1/2;	
		}
		for(fb5=(-1),fb9=(fb-2);fb5>=(-2),fb9<=(fb-1);fb5--,fb9++){
			double fb0=myatoi(argr[3][fb9])*power(10,fb5);
			sumfb2=sumfb2+fb0;
		}
		for(j=0;j<=5;j++){
			int fb10=sumfb2*2;
			double fb11=sumfb2*2;
			double fb12=fb11-fb10;
			char fb13;
			switch(fb10){
					case 0: fb13='0';break;
					case 1: fb13='1';break;
					}
			FB2[j]=fb13;
			
			sumfb2=fb12;	
		}
		
		if(argr[1][1]=='D'){             // print D to B convertion
			printf("%s.%s\n",FB1,FB2);
		}
		if(argr[1][1]=='F'){            //print F to B convertion
			for(l=0;l<=1;l++){
				FB3[l]=FB2[l];
			}
			printf("%s.%s\n",FB1,FB3);
		}
	}
	
	}
	

//display errors
	if(argr[1][1]=='B' || argr[1][1]=='I' || argr[1][1]=='H' || argr[1][1]=='F' || argr[1][1]=='D'){
	
	} 
	else {
		printf("ERROR: The input argument is wrong.\n");
		printf("The convertion is not possible. \n");
	}
	if(argr[2][1]=='B' || argr[2][1]=='I' || argr[2][1]=='H' || argr[2][1]=='F' || argr[2][1]=='D'){
	}
	else {
		printf("ERROR: The output argument is wrong.\n");
		printf("ERROR: The convertion is not possible. \n");
	}
	
	if(argv==4){
	} else {
		printf("ERROR: The nuber of arguent is wrong.\n");
	}
	int brk2=0;                        // print warning
	for(j=0;j<=(brk-1);j++){
		int brk1=argr[3][j];
		if(brk1==46){
			break;
		} else {
			brk2++;
		}
		}
		
		int brk3=brk-brk2;
		if(brk3>7){
		
			printf("WARNING: There is a possibility for a precision loss. \n");
		}


}
	
	
	
	

	

int myatoi(char argrc){     // function for convert char value to intiger value. 
	int num;
	
		
		switch(argrc) {
			case '0':num=0;break;
			case '1':num=1;break;
			case '2':num=2;break;
			case '3':num=3;break;
			case '4':num=4;break;
			case '5':num=5;break;
			case '6':num=6;break;
			case '7':num=7;break;
			case '8':num=8;break;
			case '9':num=9;break;
			
			
		}
		
	
	
	return num;
}


double power(int pow1,int pow2){    // function for get a power
	int i,j;
	double prod=1;
	if(pow2==0){
		prod=1;
	}
	else if(pow2>0) {
		for(i=0;i<=(pow2-1);i++){
			prod=prod*pow1;
		}
	} else {
		pow2=pow2*(-1);
		for(j=0;j<=(pow2-1);j++){
			prod=prod*pow1;
		}
		prod=(1/prod);
	}
	return prod;
}


int countargr(char *num){   // function for get the number of characters in char array
	int b=0;
	int countnum=0;
	while(num[b]!='\0'){
		countnum++;
		b++;
		
	}
	
	return countnum;
}
