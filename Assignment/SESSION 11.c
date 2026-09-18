#include<stdio.h>
void swap(int*a,int*b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
int main(){
	int x=10,y=20;
	printf("before swap:x=%d,y=%d\n",x,y);
	swap(&x,&y);
	printf("after swap:x=%d,y=%d\n",x,y);
}

* pointer declaration:A pointer is a variable that stores a memory address of another variable it declares by (*)operator

*dereferencing : printf("%d",*ptr);    //outputs 10
                 *ptr=20;              //changes the value of number to 20


*pointer arithmatic:+ , - ,++ , -  , these are arithmetic operators
