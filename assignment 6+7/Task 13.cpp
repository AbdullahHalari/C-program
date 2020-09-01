#include<stdio.h>

void repeating(int arr[],int n);

int main(){
	
    int n;
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d",&n);
    int arr[n];
    int i;
    for(i = 0; i < n; i++)
    {
    	printf("elenment - %d:  ",i);
        scanf("%d",&arr[i]);
        
        
    }
    printf("The given array is: \n");
    for(i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
        
    }
    
    repeating(arr,n);
   
}
void repeating(int arr[], int n){
	
    int i, j;
    int count = 0;
    printf("\nThe repeating elements are: ");
    for(i = 0;i < n;i++)
    {
    	 
        for(j = i+1;j < n;j++)
        {
            if(arr[i] == arr[j])
            {
                printf("%d ", arr[j]);
            }
            
        }
    }
}

