/*write a program to take string from user and in each character if it have 3 set bits delete the character
 *
 * ex: i/p : s[16]="abcdefghij";
 *
 * o/p= cefgij
 *
 *
 * */
#include<stdio.h>
#include<string.h>
int main(){
	char s[100];
	int i = 0, j,count;
	printf("Enter the string: ");
	gets(s);
	while(s[i] != '\0'){
		for(j = 0; j < 8; j++){
		     if(s[i] & (1 << j)	== 1){
			     count++;
		     }
		     if(count >= 3){

		      	break; 
			}

 			
