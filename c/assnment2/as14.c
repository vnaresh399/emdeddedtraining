//	assnment 2 -14
#include<stdio.h>
void main(){
	int num,digit,s,i,mul;
	printf("enter the number\n");
	scanf("%d",&num);
	printf("enter the digit \n");
	scanf("%d",&digit);
	for(i=num,mul=1;i;i=i/10){
		if(i%10 != digit)
		{
			s = s + i%10*mul;
			mul*=10;
		}
	}
	printf("%d\n",s);
}
