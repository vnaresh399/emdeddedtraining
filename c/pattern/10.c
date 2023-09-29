#include<stdio.h>
void main(){
	int n,i,j,k,a;
	printf("enter the number\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=n-i;j++){
			printf("  ");
		}
		for(k=1;k<=2*i-1;k++){
			printf("%d ",k);
		}

	printf("\n");

	}
	for(i=1,a=1;i<n;i++,a=a+2){
		for(j=1;j<=i;j++){
			printf("  ");
		}
		for(k=1;k<=2*(n-1)-a;k++){
			printf("%d ",k);
		}
	printf("\n");

	}

}
