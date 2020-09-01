#include <stdio.h>

void ne_po_check(int);

int main(){
	
	int num;
	
	printf("Enter the number: ");
	scanf("%d",&num);
	
	ne_po_check(num);
	
}

void ne_po_check(int num){
	

	if (num>0){
	 printf("positive number");
	} 
	
	else{
	 printf("negative number");
   }
   

}
