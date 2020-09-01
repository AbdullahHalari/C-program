#include<stdio.h>

int main(){
	
	int maths,chemistry,physics,total,matotal;
	
	printf("Enter the marks of maths: ");
	scanf("%d",&maths);
	
	printf("Enter the marks of chemistry: ");
	scanf("%d",&chemistry);
	
	printf("Enter the marks of physics: ");
	scanf("%d",&physics);
	
	total = maths + physics + chemistry;
	matotal = maths + total;
	
	if(maths>=65 & physics>=55 & chemistry>=50 & total>=180 )

		printf("The candidate is eligible for admission");
		
	else if(matotal>= 140)
	    
	    printf("The candidate is eligible for admission");
		
	else 
    	printf("The candidate is not eligible for admission");
	

}


