// assignment 1 - 1
#include<stdio.h>
void main(){
unsigned short int num,num1;
int pos;
printf("enter the number\n");
scanf("%hu",&num);
printf("binary before swap nibbles\n");
for(pos=15;pos>=0;pos--)
	printf("%d",num>>pos&1);
printf("\n");
// method 1 without using loop
num1 = (num & 0xf) << 12| (num&0xf000)>>12 |(num&0x0ff0);
printf("binary after swap the nibbles in first method \n");
for(pos=15;pos>=0;pos--)
	printf("%d",num1>>pos&1);
printf("\n");


// method using for loop
int i,j;// i need to variables extra and 1 loop
for(i=0,j=15;i<4;i++,j--)
	if(num>>i&1!=num>>j&1){
		num = num^1<<i;
		num = num^1<<j;
	}

printf("binary after swapping nibbles using second method\n");
for(pos=15;pos>=0;pos--)
	printf("%d",num1>>pos&1);
printf("\n");
}
