#include<stdio.h>
#define MAX 10
int main()
{
  int a[MAX];
  int n, i, j, temp, first, last, mid, key;
  printf("enter the size: ");
  scanf("%d", &n);
  printf("enter %d integers:", n);
  for(i=0; i<n; i++)
    {
      scanf("%d", &a[i]);
    }
  for(i=0; i<n-1; i++)
    {
    for(j=0; j<n-1-i; j++)
      {
        if(a[j]<a[j+1])
        {
          temp = a[j];
          a[j]= a[j+1];
          a[j+1]=temp;
        }
      }
    } 
  printf("sorted elements are: \n");
  for(i=0; i<n; i++)
    {
      printf("%d \t", a[i]);
    }
  return 0;
  }