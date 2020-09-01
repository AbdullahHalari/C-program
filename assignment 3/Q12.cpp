#include<stdio.h>

int main(){
	
    int choice;	
    float num_1,num_2;
    
    printf("Enter 1 for addition\n");
    printf("Enter 2 for subtraction\n");
    printf("Enter 3 for multiplication\n");
    printf("Enter 4 for division\n");
    printf("Enter your choice now: ");
	scanf("%d",&choice);
	
    printf("Enter numbers: \n");
	scanf("%f %f",&num_1,&num_2);
	
	  
	switch(choice)
    {
    	case 1:
            printf("Addition of %.2f and %.2f is : %.2f",num_1,num_2,num_1+num_2);
        	break;
        case 2:
            printf("Subtraction of %.2f and %.2f is: %.2f",num_1,num_2,num_1-num_2);
        	break;
        case 3:
            printf("Multiplication of %.2f and %.2f is: %.2f",num_1,num_2,num_1*num_2);
        	break;
		case 4:
			printf("Division of %.2f and %.2f is: %.2f",num_1,num_2,num_1/num_2);
        	break;	
		default:
			printf("Invalid");
			break;
	}
 
}

