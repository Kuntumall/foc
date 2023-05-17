#include<stdio.h>
int main()
{
	int x,y,z;
	printf("enter x value : ");
	scanf("%d",&x);
	printf("enter the y value : ");
	scanf("%d",&y);
	x=y,y=z,z=x;
	printf("x=%d,y=%d",x,z);
	return 0;
	}
