//assnment 1-8
#include<stdio.h>
void main(){
int num,r,s=0;
printf("enter the number\n");
scanf("%d",&num);
for( ;num;num=num/10)
{
r = num % 10;
	if((r&1)==0)
		s = s + r;
}
printf("%d\n",s);
}
