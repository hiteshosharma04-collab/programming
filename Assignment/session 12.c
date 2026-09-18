#include<stdio.h>
struct student{
	char name [20];
	int marks;
	char grade;
};
int main()
{
	struct student s1={"hitesh",85,'A'};
	
	printf("name:%s\n",s1.name);
	printf("marks:%d\n",s1.marks);
	printf("grade:%c\n",s1.grade);
	
}

A structure in c is a user defined data type that groups related variable of different data types together under a single name 