#include<stdio.h>

void triangle();

 int main(){
 	
 	triangle();
 }
 
 void triangle(){
 
  int num,i,j,k;
  
  printf("Enter Rows: ");
  scanf("%d",&num);
  
  for(i=1; num>=i; i++){
  	
   for(k=num-i; k>=1; k--){
   
       printf("  ");
   }
   for(j=i; j>=1; j--){
   
        printf("* ");
    }
   for(j=i; j>1; j--){
   
        printf("* ");
    }
   printf("\n");
  }
   
 }

