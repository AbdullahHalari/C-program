#include <stdio.h>

void unique();
 
int main(){

  	 unique();
}
void unique(){

	int arr[10], i , j , k , input;
	int count = 0;
	
	printf("Input the number of elements to be stored in the array :   ");
	scanf("%d", &input);
	
	printf("Input %d elements in the array  :  \n", input);
	for (i = 0; i < input; i++){
		
	printf("elenment - %d:  ",i);
    	scanf("%d", &arr[i]);
    	
   	    }     
   	
   	printf("The unique elements found in the array are : ");
 
	for (i = 0; i < input; i++){
	
			count = 0;
		for(j = 0 ; j < i-1; j++){
		
		
    		if(arr[i] == arr[j]){
    		
    			count++;
		
			}
		}
		for(k=i+1; k<input; k++){
        
            
            if(arr[i]==arr[k]){
            
                count++;
            }
        }
		
       if(count==0){
        
          printf("%d ",arr[i]);
          
        }
        
    }
}

