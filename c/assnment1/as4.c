// assignment 1 - 4
#include<stdio.h>
void main(){
unsigned short int num,num1;
int pos,bit,r;
printf("enter the number\n");
scanf("%hu",&num);
printf("enter how many times bits need to be rotated\n");
scanf("%d",&bit);//as per question this bit value is 3
printf("binary before rotate the number\n");
for(pos=15;pos>=0;pos--)
	printf("%d",num>>pos&1);
printf("\n");
// method 1 without using loop
num1 =((1<<bit)-1&num)<<(16-bit) | (num>>bit);
printf("binary after rotating the bits for bit times \n");
for(pos=15;pos>=0;pos--)
	printf("%d",num1>>pos&1);
printf("\n");


// method using for loop
int i,j;// i need to variables extra and 1 loop
for(i=0;i<bit;i++)
{
r = num>>i&1;
if(r){
num = r<<15 & num>>1;
}

}
printf("binary after reversing using second method\n");
for(pos=15;pos>=0;pos--)
	printf("%d",num1>>pos&1);
printf("\n");

}
