// assnment 2 -8
#include<stdio.h>
void main(){
	int i,j,k,r,s,c,mul;
	for(i = 1 ; i<= 501; i++){
		c=0;
		for(j = i;j;j=j/10,c++);
		s = 0;
		for( j =i ;j; j = j/10 ){
			r = j % 10;
			mul = 1;
			for(k=1;k<=c;k++){
				mul = r*mul;
			}
			s = s + mul;
		}
		if(s == i){
			printf("%d ",s);
		}
	}	
	printf("\n");

}
