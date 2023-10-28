#include<stdio.h>
void main(){
        unsigned short int num,a,b,d;
	int pos,c,g,h;
	scanf("%hx",&num);    // assume 0xf5f0


	scanf("%d",&c); 	// input  which nibble to set

	scanf("%d",&g);         // input which nibble to clear

	scanf("%d",&h);         // input which nibble to toggle

	for(pos=15;pos>=0;pos--)
		printf("%d",num>>pos&1);
	printf("\n");



	a = num | (0xf<<(c-1)*4);

	b = num &~(0xf<<(g-1)*4);

	d = num ^ (0xf<<(h-1)*4);

	num = num & (0xf<<(9-c+g+h)*4);

	num = a|b|d|num;




printf("%d %d %d %hu\n",a,b,d,num);
	for(pos=15;pos>=0;pos--)
		printf("%d",num>>pos&1);
	printf("\n");
}




































// num = 245  c = 2  asssume 
// 0000 0000 0000 0000 0000 0001 1111 0101   == 501
//
//
// a=(1<<(c-1)*4)-1; grouping important   why c-1 since c indicates nibble to be deleted and we need to store right side of delete which is 1 nibble less 
// 0000 0000 0000 0000 0000 0000 0000 0001  == 1   and c-1 is 2-1 ==1*4 = 4  == 0000 0000 0000 0000 0000 0000 0001 0000 after 4 shifts 1 became 16
//
// now 16-1 is 15  0000 0000 0000 0000 0000 0000 0000 1111 this stored in a 
//
// b = num&a;  which results 0000 0000 0000 0000 0000 0000 0000 0101  // delete nibble right side info stored in b
//
// num = num>>c*4 ==  num>>8   == 0000 0000 0000 0000 0000 0000 0000 0001  nibble to be deleted and right side nibble also deleted and those many 0's added in left
//
// b contains the right side bits of delete nibble which need to be added to num so 
// num<<(c-1)*4 == why c-1 means  as we stored right side so reason == 0000 0000 0000 0000 0000 0000 0001 0000
//
// now num|b      0000 0000 0000 0000 0000 0000 0001 0000   === num
//                0000 0000 0000 0000 0000 0000 0000 0101  ==== b
//
//                0000 0000 0000 0000 0000 0000 0001 0101  ==== num result after deleting 
//
