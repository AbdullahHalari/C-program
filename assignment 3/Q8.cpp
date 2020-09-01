#include<stdio.h>

int main()
{
	char grades;

	printf("Input the grade: ");
    scanf("%c",&grades);

    
    switch(grades)
    {
    case 'E':
        printf("You have chosen : Excellent");
        break;
    case 'V':
        printf("You have chosen : Very Good");
        break;
    case 'G':
        printf("You have chosen : Good");
        break;
    case 'A':
        printf("You have chosen : Average");
        break;
    case 'F':
        printf("You have chosen : Fail");
        break;
    default :
        printf("You have chosen : Invalid Grade");
        break;
    }
    
}

