/*Develop a Program to find the sum of a number's first and last digits.*/

#include<stdio.h>
int main(){
	int num,lastdigit,firstdigit;
	printf("Enter the any number : ");
	scanf("%d",&num);
	
	int sum=0;
	lastdigit=num%10;
	sum=sum+lastdigit;
	while(num>=9){
		num=num/10;
	}
	firstdigit=num;
	sum=lastdigit+firstdigit;
	printf("The sum of the first and the last digit:%d",sum);
}
