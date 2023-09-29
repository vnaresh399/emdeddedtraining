// assnment 2 -7
#include<stdio.h>
void main(){
	int i,j;
	for(i = 2 ; i<= 11; i++){
		printf("factorial of %d is : ",i);
		for(j=1;j<=i;j++){
			if(i%j==0)
				printf("%d ",j);
		}
		printf("\n");
	}	

}
