#include <stdio.h>
void ascending(int);

int main(){
 
       int n;
       
        printf("Enter the value of N \n");
        scanf("%d", &n);
 
        ascending(n);
 
    }
void ascending(int n){
	
	int i, j, a, number[30];
	
	printf("Enter the numbers \n");
	
    for (i = 0; i < n; ++i){
	
        scanf("%d", &number[i]);

    for (i = 0; i < n; ++i){
   
    }
 
        printf("The numbers arranged in ascending order are given below \n");
        for (i = 0; i < n; ++i)
            printf("%d\n", number[i]);

	}
}
