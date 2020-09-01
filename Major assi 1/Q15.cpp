#include <stdio.h>
#include <string.h>

void alp_dig_con(char str[]);

int main(){
    char str[100];
    
    
       printf("Input the string : ");
       fgets(str, sizeof str, stdin);	

    alp_dig_con(str);

}
void alp_dig_con(char str[100]){
	int alphabet = 0, digit = 0 , special = 0, i = 0;
	
    while(str[i]!='\0'){
    
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')){
        
            alphabet = alphabet +1;
        }
        else if(str[i]>='0' && str[i]<='9'){
        
            digit = digit + 1;
        }
        else{
        
            special = special + 1;
        }

        i++;
    }

    printf("Number of Alphabets in the string is : %d\n", alphabet);
    
    printf("Number of Digits in the string is : %d\n", digit);
    printf("Number of Special characters in the string is : %d\n\n", special);
}


