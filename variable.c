#include<stdio.h>
#include<stdarg.h>
void max(int args_count,...)
{
	int i,x;
	va_list args;
	va_start(args, args_count);
	for(i=0;i<args_count;i++)
	{
		x =va_arg(args,int);
		printf("%d ",x);
	}
	va_end(args);
}
void main(){
	max(3,1,2,3);
	printf("\n");
}
