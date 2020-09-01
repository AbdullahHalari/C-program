#include <stdio.h>

 void duplicate();
 
 
int main(){
	
	duplicate();
}

void duplicate(){

	int arr[10], i, j, input;
	int count = 0;
	printf("Input the number of elements to be stored in the array :   ");
	scanf("%d", &input);
	
	printf("Input %d elements in the array  :  \n", input);
	for (i = 0; i < input; i++)
	{
	printf("elenment - %d:  ",i);
    	scanf("%d", &arr[i]);
   	}     
 
	for (i = 0; i < input; i++)
	{
		for(j = i + 1; j < input; j++)
		{
    		if(arr[i] == arr[j])
    		{
    			count++;
				break;
			}
		}
	}

 	printf("Total number of duplicate elements found in the array is : %d ", count);
	     


}
