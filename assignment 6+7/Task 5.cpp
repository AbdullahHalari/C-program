#include<stdio.h>

void caps_pattern();

int main(){

 caps_pattern();
 
}

void caps_pattern(){
 char c = 'A';
 int rows;
	 printf("Enter Rows: ");
	 scanf("%d",&rows);

    for(int i = 1; i<=rows; i++){ 
		
		for(int j =1; j<=i; j++){
			
			printf("%c", c);
		}
		c++;
		printf("\n");
		
	}
}


