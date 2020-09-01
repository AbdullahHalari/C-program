#include <stdio.h>
void step();

int main(){
	
	step();
	
}

void step(){
    int count = 1,a;
  
    printf("Enter Value: ");
    scanf("%d",&a);
    if (a >0){
	
    while (a != 1) {
    	
        if (a % 2 == 0) {
        	
            a = a / 2;
            printf("\nNext value is %d",a);
        }
      
		 else {
		 	
            a = a * 3 + 1;
            
            printf("\nNext value is %d",a);
        }
        
        ++count;
        
		}
    printf("\n\nfinal value is %d The Total step is %d ",a,count);
}

	else {
		
		printf("ERROR");
		
	}
    
    
    
}



