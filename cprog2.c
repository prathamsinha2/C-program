#include<stdio.h>
int main()
{
  int x;
  scanf("%d", &x);
  printf("enter the number you want to check");
  scanf("%d", &x);
  if ( x % 2 == 1)
  {
    printf("the number is odd");
  }
  else 
  {
    printf("the number is even");
  }
  return 0;
}