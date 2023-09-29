//assnment 1 - 7
#include<stdio.h>
void main(){
unsigned short int num;
int pos;
printf("enter the number in hexadecimal format\n");
scanf("%hx",&num);
printf("binary format before nibble operation\n");
for(pos=15;pos>=0;pos--)
	printf("%d",num>>pos&1);
printf("\n");
int n1,n2,n3;
n1 =( num & 0xf )| 0xf;;
n2 = num & 0;
n3 = (num&0xf00) ^0xf00; 
num = n1|n2|n3|( num&0xf000);
printf("binary format of number after nibble operation\n");
for(pos=15;pos>=0;pos--)
	printf("%d",num>>pos&1);

printf("\n%hx\n",num);
}
