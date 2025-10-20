#include <stdio.h>

int main(){
	int arr1[2][3],i,j;
	
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("Enter element at [%d][%d]: ",i,j);
			scanf("%d",&arr1[i][j]);
		}
	}
	printf("Before transpose\n");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("%d ",arr1[i][j]);
			
		}printf("\n");
	}
	
		printf("After transpose\n");
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			printf("%d ",arr1[j][i]);
			
		}printf("\n");
	}
	
	
}
