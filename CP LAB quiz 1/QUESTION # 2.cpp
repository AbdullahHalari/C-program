#include <stdio.h>

void leap_year();

int main() {
	
	leap_year ();

}

	void leap_year(){
	
   int year;
   
   printf("Enter the year: ");
   scanf("%d",&year);
   
   if (year % 4 == 0 && year % 100!= 0)
      printf("This is a leap year!");
      
    else if(year%400 ==0)  
      printf("This is a leap year!");
      
   else
      printf("This is not a leap year");


}