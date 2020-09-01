#include<stdio.h>

void asci_pattern();

int main(){

 asci_pattern();
 
}

void asci_pattern(){
 char c = 'a';
 char ch = 'A';
 int rows;
	 printf("Enter Rows: ");
	 scanf("%d",&rows);
	 
	 

    for(int i = 1; i<=rows/2; i++){
	
		for(int j =1; j<=i; j++){
			
		  printf("%c", c);

		}
	
		c++;
		
		printf("\n");
	}
		
	for(int i =rows/2 ; i<rows; i++){
	
		for(int j =0; j<=i; j++){
			
		  printf("%c", ch);

		}
	
		ch++;
		
		printf("\n");
	}
		
		
	
}





