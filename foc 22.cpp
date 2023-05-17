#include <stdio.h>
 
int main()
{
  int a, b, tmp;
 
  printf("Enter two numbers: ");
  scanf("%d%d", &a, &b);
 
  printf("Before Swapping\nA = %d\nB = %d\n", a, b);
 
  tmp = a;
  a = b;
  b = tmp;
 
  printf("After Swapping\nA = %d\nB = %d\n", a, b);
 
  return 0;
}
