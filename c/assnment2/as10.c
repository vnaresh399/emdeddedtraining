//assnment 2 - 9'
#include<stdio.h>
void main() {
	int num,i,j,c,s;
	printf("enter the number\n");
	scanf("%d",&num);
	for(i=num,c=0;i;i=i/10,c++);

	for(j=0;j<c-4;j++,num = num/10);
	
	s = 0;
	for(i = num;i;i= i/10){
		s = s + i%10;
	}
	printf("%d\n",s);
}
