#include<stdio.h>

void multiplication_matrix(int,int);
void multiplication_matrix(int row1,int column1){
	int matrix1[row1][column1];
	int matrix2[row1][column1];
	int result_matrix[row1][column1];
	
	for(int i = 0; i<row1; i++){
		for(int j = 0; j<column1; j++){
			printf("Enter value at row,column: (%d %d) ",i,j);
			scanf("%d",&matrix1[i][j]);
		}
	}
	printf("\n\n");
	for(int i = 0; i<row1; i++){
		for(int j = 0; j<column1; j++){
			printf("Enter value at row,column: (%d %d) ",i,j);
			scanf("%d",&matrix2[i][j]);
		}
	}
	for(int i=0; i<row1;i++){	
				for(int j = 0; j<column1; j++){
					result_matrix[i][j]=0;
					for(int k =0; k<column1;k++){
					
			result_matrix[i][j] = result_matrix[i][j] + matrix1[i][k] * matrix2[j][k];
	
		}
	}
}
	for(int i=0; i<row1;i++){	
				for(int j = 0; j<column1; j++){
				printf("\t %d",result_matrix[i][j]);	
		}
		printf("\n");
	}
}

int main(){
	multiplication_matrix(3,3);
}
