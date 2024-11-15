#include<stdio.h>
int main(){
	/*Develop a Program to count the total number of digits in a number.*/
	
	int num,count;
	printf("enter the any number:");
	scanf("%d",&num);
	while(num>0){
		num=num/10;
		count++;
	}
	printf("Total number of digit is:%d",count);
}
