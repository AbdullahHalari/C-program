#include<stdio.h>
 
int gcd(int n,int m){
	
    if((n>=m)&&((n%m)==0)){
	
        return(m);
}
	else{
	
        gcd(m,(n%m));
    }
    
}
 
int main(){
	
    int n,m,result;
    printf("Input the first integer number:");
    scanf("%d",&n);
    
    printf("Input the second integer number:");
    scanf("%d",&m);
    
    result=gcd(n,m);
    printf("GCD of %d and %d is %d",n,m,result);
 
    return 0;
}

