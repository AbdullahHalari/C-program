#include <stdio.h>

void table();

int main(){
 table();
}

void table(){
	 
	 int num = 1;
	 int num_1;
	 printf("Enter number the table you want: ");
	 scanf("%d",&num_1);
	 while(num <= 10){
	   int result = num_1 * num ;
	   printf("%d x %d = %d\n",num_1,num,result);
	   num++;
	 }
}
