#include<stdio.h>
void main(){
	int mood;
	printf("RATE YOUR ENERGY FROM 1 TO 5:");
	scanf("%d",&mood);
    if(mood>=6)
    {
    	printf("invalid:");
	}
	else if(mood<=2)
	{
		printf("dont quit");
	}
	else if(mood>=3)
	{
		printf("keep it up");
	}
}


if STATEMENT
*execute a block of code only if a sepcific condition is true 

Else if statement
*check multiple condition until one of them found is to be true 

nested if 
*placed one if statment inside another to handle complex , multi layered condition

switch case 
*tests a single varialbe against a list of predefined values to run 
the matching blocks of code
