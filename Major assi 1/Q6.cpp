#include<stdio.h>
void pattern();

int main(){
	
	pattern();

}
void pattern(){
	
	for (int i=0; i<4;i++){
		
		for (int i=0; i<10;i++){
		 printf("*");
		}	
		printf("\n");
	}
	printf("____________________\n");
		for (int i=1; i<=5;i++){
		
		for (int j=1; j<=i;j++){
		 printf("*",i);
		}	
		printf("\n");
	}
		printf("____________________\n");

		for (int i=5; i>=1;i--){
		
		for (int j=1; j<=i;j++){
		 printf(" ",i);
		}	
		for(int k=5;k>=i;k--)
        {
            printf("*");
        }
		printf("\n");
	}
		printf("____________________\n");

	  for(int i=1;i<=5;i++)
    {
        for(int j=i;j<5;j++)
        {
            printf(" ");
        }
        for(int k=1;k<(i*2);k++)
        {
                printf("*");
        }
        printf("\n");
    }
    	printf("____________________\n");

     for(int i=1;i<=5;i++)
    {
        for(int j=i;j<5;j++)
        {
            printf(" ");
        }
        for(int k=1;k<(i*2);k++)
        {
                printf("%d",i);
        }
        printf("\n");
    }
    	printf("____________________\n");

     int i, j, k, l;
    
    for (i = 1; i <= 5; i++)
    {
        for (j = 5; j > i; j--)
        {
            printf(" ");
        }
        for (k = i; k >= 1; k--)
        {
            printf("%d", k);
        }
        for (l = 2; l <= i; l++)
        {
            printf("%d", l);
        }
        printf("\n");
    }
}













