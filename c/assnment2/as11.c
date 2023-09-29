// assnment 2 - 11
#include<stdio.h>
void main(){
	int i,j,c=0;
	for(i=21;c<7;i++)
	{
		for(j=2;j<i;j++){
			if(i%j==0)
				break;
		}
		if(j==i){
			printf("%d ",i);
			c++;
		}
	}	
printf("\n");
}
