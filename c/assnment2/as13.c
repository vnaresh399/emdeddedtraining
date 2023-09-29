// assnment 2 - 13
#include<stdio.h>
void main(){
	int num,digit,c=0,i;
	printf("enter the number\n");
	scanf("%d",&num);
	for(  ; num ;num=num/10  )
	{	digit = num % 10;
		for(i=2;i<digit;i++){
			if(digit%i==0)
				break;
		}
		if(digit==i){
			c++;
		}
	}	
printf("c= %d\n",c);
}
