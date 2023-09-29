// assignment 1 - 2
#include<stdio.h>
void main(){
unsigned char ch;
int pos,i,j;
printf("enter the char...\n");
scanf("%c",&ch);
printf("binary before reverse the number\n");
for(pos=7;pos>=0;pos--)
	printf("%d",ch>>pos&1);
printf("\n");
for(i=0,j=7;i<j;i++,j--){
	if((ch>>i&1)!=(ch>>j&1)){
		ch = ch ^ 1<<i;
		ch = ch^1<<j;
	}
}
printf("binary after reverse the number\n");
for(pos=7;pos>=0;pos--)
	printf("%d",ch>>pos&1);
printf("\n");
}
