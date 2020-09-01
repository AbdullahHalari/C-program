#include<stdio.h>

int main(){
	
    int choice,radius,lenght,width,base,height;	
    float area;
    
    printf("Enter 1 for area of trapezoid\n");
    printf("Enter 2 for area of rectangle\n");
    printf("Enter 3 for area of triangle\n");
    printf("Enter your choice now: ");
    scanf("%d",&choice);
      
	switch(choice)
    {
    	case 1:
            printf("Enter base,base and height of trapezoid : ");
            scanf("%d %d %d",&base,&base,&height);
            area =((base+base)/2*height);	
            break;
        case 2:
            printf("Enter length and width of the rectangle: ");
            scanf("%d %d",&lenght,&width);	
            area =(lenght*width); 			
        	break;
        case 3:
            printf("Enter the base and hight of the triangle: ");
            scanf("%d %d",&base,&height);
            area =(0.5*base*height);		
            break;
          }
    printf("\nThe area is: %.2f",area);
}

