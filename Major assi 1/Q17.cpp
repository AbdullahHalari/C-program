#include <stdio.h>
#include <string.h>

void maximum(char str[]);

int main(){

    char str[100];
	
	
       printf("Input the string : "); 
       fgets(str, sizeof str, stdin);
	
		maximum(str);

    
}
void maximum(char str[100]){
	int frequency[255];
    int max;
    int ascii;
    
    for(int i=0; i<255; i++) { 
   
        frequency[i] = 0;
    }


   
    int i = 0;
    
while(str[i] != '\0') {
    
        ascii = (int)str[i];
        frequency[ascii] += 1;

        i++;
    }

    max = 0;
    for(i=0; i<255; i++) {
    
        if(i!=32)
        
        if(frequency[i] > frequency[max]) {
            max = i;
        }
    }	
    printf("The Highest frequency of character '%c' appears number of times : %d \n\n", max, frequency[max]);
}


