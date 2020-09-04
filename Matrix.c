#include <stdio.h>


int main(){
	
	int row,col,i,j;
	printf("Input ROW: ");
	scanf("%d",&row);
	printf("Input COL: ");
	scanf("%d",&col);
	int res[row][col];
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			res[i][j]= (i+1)*(j+1);
		}
	}
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("%d ",res[i][j]);
		}
		printf("\n");
	}
	return 0;
}
