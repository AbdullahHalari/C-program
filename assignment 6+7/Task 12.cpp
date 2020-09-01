#include <stdio.h>
 
 void max_min();

int main(){
	  max_min();
}
	 
 void max_min(){
 
    int arr[10];
    int i, max, min, input;
	
       printf("Input the number of elements to be stored in the array :");
       scanf("%d",&input);
   
       printf("Input %d elements in the array :\n",input);
       for(i=0;i<input;i++)
            {
	      printf("element - %d : ",i);
	      scanf("%d",&arr[i]);
	    }


    max = arr[0];
    min = arr[0];

    for(i=1; i<input; i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }


        if(arr[i]<min)
        {
            min = arr[i];
        }
    }
    printf("Maximum element is : %d\n", max);
    printf("Minimum element is : %d\n\n", min);
}

