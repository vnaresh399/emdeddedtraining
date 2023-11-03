#include<stdio.h>
void rotation_fun(char ch, int rotation,int rows,int column,int (*a)[column]){
	int temp1,temp2,i,j,k;
	if(ch=='r')
	{
		for(k=0;k<rotation;k++){
			temp1=a[0][column-1];
			temp2=a[rows-1][0];
			for(j=0,i=column-1;j<i;j++){
				a[i][j]=a[i][j+1];    //last row shitfing
				a[0][i-j]=a[0][i-1-j];    // first row shifting
				a[i-j-1][0]=a[i-j-1][0]+temp2-(temp2=a[i-j-1][0]);    // first column shifting
				a[j+1][i]=temp1+a[j+1][i]-(temp1=a[j+1][i]);  // last column shifting
			}
		}
	}
	else{
		for(k=0;k<rotation;k++){
			temp1=a[0][0];
			temp2 = a[rows-1][column-1];
			for(j=0,i=column-1;j<i;j++){
				a[0][j]=a[0][j+1];  // first row shitfing
				a[i][i-j]=a[i][i-j-1]; // last row shifting
				a[j+1][0]=a[j+1][0]+temp1-(temp1=a[j+1][0]);//first column shifting
				a[i-j-1][i]=temp2+a[i-j-1][i]-(temp2=a[i-j-1][i]);//last column shifting
			}
		}

	}
}
void main(){
	int rows,column;
	printf("enter the number of rows and columns\n");
	scanf("%d %d",&rows,&column);
	int a[rows][column],i,j,rotation;
	char ch;
	printf("enter r for right and l for left direction \n");
	scanf(" %c",&ch);
	if(ch=='r'||ch=='l'){
		printf("enter the array elements\n");
		for(i=0;i<rows;i++){
			for(j=0;j<column;j++){
				scanf("%d",&a[i][j]);
			}
		}
		printf("enter the no of rotations\n");
		scanf(" %d",&rotation);
		printf("\nbefore rotation\n\n");
		for(i=0;i<rows;i++){
			for(j=0;j<column;j++){
				printf("%d ",a[i][j]);

			}
			printf("\n");
		}

		rotation_fun(ch,rotation,rows,column,a);
	}
	else{
			printf("enter correct direction\n");
			return;
		}


		printf("\nafter rotation\n\n");
		for(i=0;i<rows;i++){
			for(j=0;j<column;j++){
				printf("%d ",a[i][j]);
			}
			printf("\n");
		}
}
