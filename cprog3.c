//*HARSHA DIWAKAR J-33*/
#include <stdio.h>
#include <math.h>
int main ()
{
  int a, b, c, desc, r1, r2, real, img;
  printf("enter the coefficients a, b, and c");
  scanf("%d%d%d", &a, &b, &c);
  if (a == 0)
  {
    printf("coefficient of 'a' cannot be 0. we can't proceed");
    return 0;
  }
  desc = (b*b) - (4*a*c);
  if (desc   == 0)
  {
    printf("roots are equal\n");
    r1 = -b/(2*a);
    r2 = r1;
    printf("the roots are %d and %d", r1, r2);
  }
  else if (desc > 0)
  {
    printf("the roots are distinct");
    r1 = (-b + sqrt(desc))/(2*a);
    r2 = (-b - sqrt(desc))/(2*a);
    printf("the roots are %d and %d", r1, r2);
  }
  else 
  {
    printf("\nthe roots are imaginary\n");
    real = -b/(2*a);
    img = sqrt(-desc)/(2*a);
    printf("\nroot r1 = %d + %d", real, img);
    printf("\nroot r2 = %d + %d", real, img);
  }
  return 0;
}