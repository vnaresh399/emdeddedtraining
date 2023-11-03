#include<stdio.h>
void main(){
	int rows,column;
	printf("enter the number of rows and columns\n");
	scanf("%d %d",&rows,&column);
	int a[rows][column],i,j,rotation;
	char ch;
	printf("enter the array elements\n");
	for(i=0;i<rows;i++){
		for(j=0;j<column;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter r for right and l for left direction \n");
	scanf(" %c",&ch);
	printf("enter the no of rotations\n");
	scanf(" %d",&rotation);
	printf("before rotation\n");
	for(i=0;i<rows;i++){
		for(j=0;j<column;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	//////////////////////////////////////////////
	if(ch=='r')
	{
		for(i=0;i<rows;i++){
			for(j=0;j<column;j--){

			}
		}
	}
	else if(ch=='l'){

	}
	else{
		printf("enter correct direction\n");
		return;
	}
	/////////////////////////////////////////////
	printf("\nafter rotation\n");
	for(i=0;i<rows;i++){
		for(j=0;j<column;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}       
