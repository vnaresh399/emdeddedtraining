// assignment 1 - 6
#include<stdio.h>
void main(){
unsigned int num;
int pos,i,j,bit;
printf("enter the number...\n");
scanf("%u",&num);
printf("enter how many last bits need to be reversed");
printf("binary before reverse the bits\n");
scanf("%d",&bit);// in our problem bit value is 6
for(pos=31;pos>=0;pos--)
	printf("%d",num>>pos&1);
printf("\n");

for(i=0,j=31;i<bit;i++,j--){
if((num>>i&1)!=(num>>j&1)){
	num = num ^ 1<<i;
	num = num^1<<j;
}
}


printf("binary after reverse the bits\n");
for(pos=31;pos>=0;pos--)
	printf("%d",num>>pos&1);
printf("\n");
}
