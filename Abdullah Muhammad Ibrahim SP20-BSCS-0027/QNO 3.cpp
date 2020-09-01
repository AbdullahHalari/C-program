#include<stdio.h>

void total_average();

int main(){
	
    total_average();
}


void total_average(){
	int n;
	printf("Enter the number of elements in the array: ");
	scanf("%d",&n);
	
	float x[n], total = 0, average;
    int i;
    float *px ,*ptotal, *paverage; 

    px = &x[0];  
    ptotal = &total,
	 paverage = &average;

    for (i=0;i<n;i++){
    
    	printf("Element %d: ",i+1);
        scanf("%f",(px+i));
        *ptotal += *(px + i);
    }

    *paverage = *ptotal / n;
    printf("Sum= %.0f \nAverage= %g\n", *ptotal, *paverage);
    printf("Total and average printed in File!");
     FILE *fptr;
	fptr = fopen("RefFile.txt","w");
		fprintf(fptr,"TOTAL = %.0f \t AVERAGE =  %g ",*ptotal,*paverage);

	
	
}


