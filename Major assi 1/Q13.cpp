#include <stdio.h>
#include <string.h>

void reverse(char str[]);

int main(){
	
    char str[50]; 
    
       printf("Input the string : ");
       
       fgets(str, sizeof str, stdin);
       
       reverse(str);
	  
}
void reverse(char str[50]){
	
	 int l=strlen(str);
	   
	   printf("The characters of the string in reverse are : \n");
	   
       for(int i=l;i>=0;i--) {
       
          printf("%c  ", str[i]);
          
        }
        
    printf("\n");
}

