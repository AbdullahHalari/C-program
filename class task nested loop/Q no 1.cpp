#include<stdio.h>

void asci_pattern();

int main(){

 asci_pattern();
 
}

void asci_pattern(){

    for(int i = 97; i<=101; i++){ 
		
		for(int j =97; j<=i; j++){
			
			printf("%c", i);
		}
		
		printf("\n");
		
	}
}
