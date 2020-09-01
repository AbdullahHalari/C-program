#include <stdio.h>
#include <string.h>

int main(){
	
	char string1[200],string2[200];
	int x=0,y=0,i,lenght_1,lenght_2;
	bool a;
	
	printf("Enter the first string: ");
	gets(string1);
	
	printf("\nEnter the second string: ");
	gets(string2);
	
	lenght_1=strlen(string1);
	lenght_2=strlen(string2);
	
	
	
	for(i=0;i<=lenght_1;i++){
		if(string1[i]>='a' && string1[i]<='z'){
			x+=1;				
		}
	}	
	
	for(i=0;i<=lenght_2;i++){
		if(string2[i]>='a' && string2[i]<='z'){
			y+=1;
		}
	}
	
	if (x!=lenght_1 || y!=lenght_2){  
		printf("\n\nInput must be *Lowercase*, and must be without *spaces* and *special characters* !!");
	}
	else{
		
		if(lenght_1>lenght_2){
			a = true;
		}
		
		else{
			a = false;
		}
		
			if (a){
		printf("\nFirst string is longer than the second: True");
	}
	
	else{
		printf("\nSecond string is longer than the first: False");
	}

		
	}
	
}
