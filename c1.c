#include <stdio.h>
int main()
{
  int a, b, result;
  char op;

  printf("enter two integers");
  scanf("%d%d", &a, &b);
  printf("enter an arithmetic operator :");
  scanf("%c", &op);
  if (op == '+')
  {
    result = a + b;
  }
  else if (op == '-')
  {
    result = a - b;
  }
  else if (op == '*')
  {
    result = a * b;
  }
  else if (op == '/')
  {
      if (b == 0)
      {
        printf("divide by zero error\n");
        return 1;
      }
      else
      {
        result = a/b;
      }
    
  }
  else if (op == '%')
  {
    if (b == 0)
    {
        printf("divide by zero error\n");
        return 1;
    }
    else
    {
      result = a%b;
    }
    printf("the result = %d\n", result);
    return 0;
  }
}