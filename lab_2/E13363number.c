#include<stdio.h>

int main(){
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	
	
	if(n > 999){														
		if(n % 5==0 && n % 6 == 0 && n % 18 != 0){												
			if(n%15 == 0){											
				printf("%d is special, big, weird and scary.\n",n);
			}else{														
				printf("%d is not special, but scary.\n",n);
			}
		}else{															
			if(n%15 == 0){
				printf("%d is special, big and scary but not weird.\n",n);
			}else{														
				printf("%d is not special, big and scary but not weird.\n",n);
			}
		}
	}else{																
		if(n % 5==0 && n % 6 == 0 && n % 18 != 0){
			if(n%15 == 0){
				printf("%d is special, weird and scary but not big.\n",n);
			}else{														
				printf("%d is not special, weird and scary but not big.\n",n);
			}
		}else{															
			if(n%15 == 0){
				printf("%d is special but not scary.\n",n);
			}else{														
				printf("%d is not special or not scary.\n",n);
			}
		}
	}
	
	return 0;
}

