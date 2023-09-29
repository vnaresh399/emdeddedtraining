#include<stdio.h>
void main(){
	int i,j,k,num,l;
	char ch;
	printf("enter the number of rows required\n");
	scanf("%d",&num);
	for(i=0;i<num;i++){
		for(j=0,ch='A';j<num-i;j++){     // for a to g and --
			printf("%c",ch++);	
		}
		for(l=0;l<2*i-1;l++){    // for spaces 
			printf(" ");
		}
		if(i>0){   // from = 1 to rest
			for(k=0,ch--;k<num-i;k++,ch--)
				printf("%c",ch);
			} 
		else{   // executes only when i =0
			for(k=0,ch=ch-2;k<num-1;k++,ch--)
				printf("%c",ch);
		}

		printf("\n");
	}	


}
