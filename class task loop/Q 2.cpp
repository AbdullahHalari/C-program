#include <stdio.h>
 
int main()
{
  int i, num, result = 0;
 
  printf("Enter the value : ");
  scanf("%d", &num);
  
  for(i = 1; i <= num; i=i+2)
  {
    result = result + i;
  }
  
  printf("The sum of odd numbers from 1 to %d is = %d\n", num, result);
  
  return(0);
}
