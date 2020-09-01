#include <stdio.h>
#include <string.h>

void vowel(char str[]);

int main(){
	
    char str[100];
   	
       printf("Input the string : ");    
       fgets(str, sizeof str, stdin);	

   	vowel(str);
}
void vowel(char str[100]){
	
	int  vowel = 0;
    int  constant = 0;
    int len = strlen(str);

    for(int i=0; i<len; i++) {
   

        if(str[i] =='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'){
        
            vowel = vowel + 1;
        }
        else if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')){
        
            constant = constant + 1;
        }
    }
    printf("\nThe total number of vowel in the string is : %d\n", vowel);
    
    printf("The total number of consonant in the string is : %d\n\n", constant);
}
