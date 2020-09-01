#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	char name[30], student_id[20], reason[300];
	float performance,will,efforts,learn;
	
	printf("\n************************************************SP20-BSCS-0027****************************************************\n\n");
	printf("Your Name: ");
	gets(name);
	printf("Your Student ID: ");
	gets(student_id);
	printf("Do you believe if a student has will to learn, no factors can stop him/her even if he/she lives in Pakistan during this COVID-19 era?\n");
	scanf("%[^\n]",reason);

	printf("Your Expected performance in online classes? (in percentage): ");
	scanf("%f",&performance);
	printf("Your actual efforts in online classes? (in percentage): ");
	scanf("%f",&efforts);
	printf("Your will to study during COVID-19 era? (in percentage): ");
	scanf("%f",&will);
	printf("How much do you think you have truly learned and understood programming? (in percentage): ");
	scanf("%f",&learn);
	
	
	system("cls");
	
	printf("\n\n*******************************************SP20-BSCS-0027*********************************************************\n\n");
	
	printf("NAME: %s\n",name);
	printf("\nID: %s\n",student_id);
	printf("\nExpected performance in online classes: %g%%\n",performance);
	printf("\nActual efforts in online classes: %g%%\n",efforts);
	printf("\nWill to study during Pandemic: %g%%\n",will);
	printf("\nHow much you've learnt and understood programming: %g%%\n",learn);
	printf("\nYour reasons on learning during COVID-19 Pandemic: %s\n",reason);
	
	printf("\n\n******************************************************************************************************************\n");
	
	
}
