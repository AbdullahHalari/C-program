#include <stdio.h>

void find(int array[]);

int main(){
	
	int array[10],i,choice;
	
	for(i=0;i<=(10-1);i++){
		
		printf("Enter Value at %d = ",i);
		scanf("%d",&array[i]);
	}
	find(array);
}
	
void find(int array[10]) {
	
	int find,flag,count=0;
	
	printf("Enter the value you want to find in the array: ");
	scanf("%d",&find);
	
	for(int j=0;j<10;j++){
		
		if (array[j] == find){
			
			flag = 1;
			count += 1;
		}
	}
	
	if(flag == 1){
	
	
		printf("\nThe number %d exists in the array\n",find);	
	}
	else{
	
		printf("\nThe number doesn't exist in the array\n");
	}
	
	printf("The number is repeated %d times",count);
}
