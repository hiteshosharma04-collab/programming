#include<stdio.h>
int main()
{
	int i, time , total=0;
	 float average;
  for(i=0;i<7;i++)
  {
  	printf("enter screen time%d:",i+1);
  	scanf("%d",&time);
  	total=total+time;
  }
  average=(float)total/7;
  printf("average screen time =%.2f hours",average);
}

1D ARRAY 
* A 1d array stores items in a single items in a single linear list 

2D ARRAY 
* A 2d array stores data ina a table with ows and column 
