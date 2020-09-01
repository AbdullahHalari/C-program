#include<stdio.h>

void small_pattern();

int main(){

 small_pattern();
 
}

void small_pattern(){
 char c = 'a';
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


