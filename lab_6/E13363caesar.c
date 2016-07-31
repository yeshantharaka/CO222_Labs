
#include <stdio.h>

int rotateright(int ch); 
int rotateleft(int ch);
int encode(int ch, int shift);



int main(){

	int shift;
	printf("Enter shift: ");
	scanf("%d", &shift);

	int character;

	char listofchar[200];
	printf("Enter text: \n");
	

	

	int i=0;
	while ((character = getchar()) != -1) {
		
		listofchar[i] = character;
		i++;
		   	
	}
	listofchar[i] = '\0';
	//printf("%d",sizeof(listofchar)/sizeof(listofchar[0]));
	for (i = 0; i < sizeof(listofchar); ++i){
		listofchar[i] = encode(listofchar[i],shift);

	}

	printf("Here is the encoded text:\n%s",listofchar);

}

int rotateright(int ch){
	char newchar;
	if(ch >= 'A' && ch <= 'Z'){
		newchar = ++ch;
		if(newchar > 'Z'){
			newchar = 'A';
		}
	}else if(ch >= 'a' && ch <= 'z'){
		newchar = ++ch;
		if(newchar > 'z'){
			newchar = 'a';
		}
	}else{
		newchar = ch;
	}


	return newchar;

}

int rotateleft(int ch){
	char newchar;
	if(ch >= 'A' && ch <= 'Z'){
		newchar = --ch;
		if(newchar < 'A'){
			newchar = 'Z';
		}
	}else if(ch >= 'a' && ch <= 'z'){
		newchar = --ch;
		if(newchar < 'a'){
			newchar = 'z';
		}
	}else{
		newchar = ch;
	}



	return newchar;

}

int encode(int ch, int shift){
	
	if(shift >= 0){
		int i;
		for ( i = 0; i < shift; ++i)	{
			ch = rotateright(ch);
		}
		
	}else{
		int i;
		for ( i = 0; i < -shift; ++i)	{
			ch = rotateleft(ch);
		}
	}
	return ch;
}

