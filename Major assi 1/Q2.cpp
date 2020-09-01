#include<stdio.h>

void increase(double);

int main(){
	
	double score;
	
	printf("enter a score: ");
	scanf("%lf",&score);
	
	increase(score);
}

void increase(double score){
	
	if(score>=80&&score<90){
		score= score+5;
		printf("%lf",score);
	}

	else {
		printf("%lf",score);
	}
}
