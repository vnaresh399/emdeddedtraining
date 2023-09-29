// assnment 2 -6
#include<stdio.h>
void main(){
	int i,c=0,j;
	for(i = 51 ; i >= 11; i--){
		for(j=2;j<i;j++){
			if(i%j==0)
				break;

		}
		if(i ==j )
		{
			printf("%d ",i);
			c++;
		}



	}	
	printf("\nc= %d\n",c);

}
