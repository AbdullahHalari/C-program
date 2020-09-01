#include<stdio.h>

void num_pattern();

int main(){

 num_pattern();
 
}

void num_pattern(){
 char c = 1;
 int rows;
	 printf("enter rows: ");
	 scanf("%d",&rows);

    for(int i = 1; i<=rows; ++i){ 
		
		for(int j =1; j<=i; ++j){
			
			printf("%d ", c);
			c++;
		}
	
		printf("\n");
		
	}
}


