#include<stdio.h>

int main()
{	
	int roll,phy,chem,compapp,total;
    float percent;
    char name[10];
    
    printf("Enter the Roll Number of student: ");
    scanf("%d",&roll);
    
	printf("Enter the Name of Student: ");
    scanf("%s",name);
    
	printf("Enter the marks of Physics, Chemistry and Computer: ");
    scanf("%d %d %d",&phy,&chem,&compapp);
    
    printf("Roll no:%d\n",roll);
    printf("Name of Student:%s\n",name);
    printf("Marks in Physics is : %d\n",phy);
    printf("Marks in chemistry is : %d\n",chem);
    printf("Marks in Computer application is : %d\n",compapp);
    
	total = phy+chem+compapp;
    percent = total/3.0;
	
	printf("\nTotal marks are: %d",total);
	printf("\nPercentage is: %f",percent);

	if (percent>=80)
		printf("\nFirst division");
	else if (percent>=60 && percent<80)
		printf("\nSecond division");	
	else if (percent>=50 && percent<60)
		printf("\nThird division");
	else 
		printf("\nFail");
}

