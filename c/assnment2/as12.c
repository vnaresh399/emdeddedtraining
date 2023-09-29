//assnment 2 - 12
#include<stdio.h>
void main(){
	int from,num,s,c=0;
	for(from=99;c<5;from--)
	{
		s = 0;
		for(num=from;num;num/=10){
			s = s*10 + num%10;
		}
		if(from==s){
			printf("%d ",s);
			c++;
		}
	}
	printf("\n");
}
