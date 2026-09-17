#include<stdio.h>
int main()
{
	char name[50];
	char username[50];
	
	printf("enter your name:");
	scanf("%s",&name);
	
	strcpy(username,name);    //using strcpy to copy name to username
	
	int len=strlen(username);   //using strlen to find length
	
	username[len]='1';
	username[len+1]='2';
	username[len+2]='\0';
	
	printf("your username is :%s\n",username);
	
}

string declarations and handling
*A string is an array character that always ends with a special null charatcter
('\0')
example- char name [20]="hitesh";

*strlen - find total number of charater

*strcpy - copy the text 

*strcmp - compares two strings