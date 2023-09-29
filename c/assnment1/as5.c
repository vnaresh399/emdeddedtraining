// assignment 1 - 5
#include<stdio.h>
void main(){
unsigned int num,num1;
int pos,bit,pos1;
printf("enter the number\n");
scanf("%u",&num);
printf("enter from which position bits need to be deleted\n");
scanf("%d",&pos1);
printf("enter how many bits need to be deleted\n");
scanf("%d",&bit);
printf("binary before deleting the bits\n");
for(pos=31;pos>=0;pos--)
	printf("%d",num>>pos&1);
printf("\n");
// method 1 without using loop
num1 = ((1<<pos1)-1 & num)|(num>>(pos1+bit))<<pos1;
printf("binary after swap the nibbles in first method \n");
for(pos=31;pos>=0;pos--)
	printf("%d",num1>>pos&1);
printf("\n");


// method using for loop
int i,r,j;// i need to variables extra and 1 loop
r = num &(1<<pos1)-1;
num = num >>pos1;
for(i=0;i<bit;i++)
{
num = num>>1;
}
num = num <<pos1 |r;
printf("binary after swapping nibbles using second method\n");
for(pos=31;pos>=0;pos--)
	printf("%d",num1>>pos&1);
printf("\n");
}
