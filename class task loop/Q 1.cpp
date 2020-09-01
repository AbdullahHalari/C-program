#include <stdio.h>

    int main(){
 
        int number[20];
 
        int i, b, a, n;
        
        n = 10;
        
        printf("Enter 10 numbers is ascending order : \n");
        
        for (i = 0; i < n; ++i)
	        scanf("%d", &number[i]);
 
 
        for (i = 0; i < n; ++i) {
        	
            for (b = i + 1; b < n; ++b){
            	
            if (number[i] < number[b]){
                	
                a = number[i];
                number[i] = number[b];
                number[b] = a;
                }
            }
        }
 
        printf("The numbers arranged in descending order\n");
 
        for (i = 0; i < n; ++i) {
        	
            printf("%d\n", number[i]);
        }
 
    }
