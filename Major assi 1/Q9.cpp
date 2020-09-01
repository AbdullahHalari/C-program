#include<stdio.h>
void search(int);

int main(){
	
  	int Size;
  
  	printf("Please Enter the size of an array :  ");
  	scanf("%d",&Size);
  
  		search(Size);
  	
}

void search(int Size){
	
	int arr[10] ,i, Search, Flag;
	printf("\n Please Enter %d elements of an array: \n", Size);
  	for(i = 0; i < Size; i++)
   	{
   	 	scanf("%d",&arr[i]);
   	}
	
	printf("\n Please Enter the Search Element  :  ");
  	scanf("%d",&Search);      
 
  	Flag = 0;
  	for(i = 0; i < Size; i++)
   	{
   		if(arr[i] == Search)
     	{
       		Flag = 2;
       		break;
	 	}   
   	}
  
  	if(Flag == 2)
  	{
  		printf("\n We found the Search Element %d at Position %d ", Search, i+1);
	}
	else
	{
		printf("\n Sorry!! We haven't found the the Search Element %d ", Search);
	}	
}


