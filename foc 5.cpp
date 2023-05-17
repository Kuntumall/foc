#include <stdio.h>

int main()
{
int n,i,p;
int s=0;


printf("Enter the value of n of the series: ");
scanf("%d",&n);


printf("Sum of the series: ");


for (i =1; i <= n; i++)

{
	
s=s+i*p(-1,i+1);
if(i>=n)
printf("%d = %d ",i,s);
else
if(i%2==0)
printf("%d + ",i);
else
printf("%d - ",i);
}

 


return 0;
}
