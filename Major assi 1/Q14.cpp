#include <stdio.h>
#include <string.h>
void total_word(char str[]);

int main(){
    char str[100];
    
	
       printf("Input the string : ");
       fgets(str, sizeof str, stdin);	
	total_word(str);
   
}
void total_word( char str[100]){
	int  i = 0;
   int word = 1;
   

    
    while(str[i]!='\0') {
   
        if(str[i]==' ' || str[i]=='\n' || str[i]=='\t'){
        
            word = word + 1;
        }

        i++;
    }

    printf("Total number of words in the string is : %d\n", word-1);
}

