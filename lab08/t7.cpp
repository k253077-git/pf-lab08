#include <stdio.h>

int main(){
	int n,i,j,isprime;
	printf("Enter the range: ");
	scanf("%d",&n);
	
	for(i=2;i<n;i++){
		isprime =1;
		for(j=2;j<i;j++){
			if(i % j == 0) {
                isprime = 0;   
                break;
		}
	} if(isprime){
		printf("%d ",i);
	}
  }

}
