#include<stdio.h>
int main(){
	/*Develop a program that prints all alphabets from ‘a’ to ‘z’ by skipping 3 alphabets using a
do-while loop.*/

	char ch='a';
	do{
	printf("%c,",ch);
	ch=ch+4;		
	}
	while(ch<='z');
}
