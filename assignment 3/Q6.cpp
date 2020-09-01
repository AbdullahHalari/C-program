#include<stdio.h>

int main()
{
    int tem;

    printf("Enter temperature of the day: ");
    scanf("%d",&tem);
    
	if(tem<0)
        printf("Freezing weather\n");
        
    else if(tem<10)
        printf("Very cold weather\n");
        
    else if(tem<20)
        printf("Cold weather\n");
        
    else if(tem<30)
        printf("Normal in temperature\n");
        
    else if(tem<40)
        printf("Its Hot\n");
        
    else
		printf("Its very hot\n");


}

