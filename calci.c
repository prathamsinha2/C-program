#include <stdio.h>
int main()
{
  int num1, num2, result;
  char op;

  printf("enter two integers");
  scanf("%d%d", &num1, &num2);
  printf("enter an arithmetic operator :");
  scanf("%c", &op);
  if (op == '+')
  {
    result = num1 + num2;
  }
  else if (op == '-')
  {
    result = num1 - num2;
  }
  else if (op == '*')
  {
    result = num1 * num2;
  }
  else if (op == '/')
  {
      if (num2 == 0)
      {
        printf("divide by zero error\n");
        return 1;
      }
      else
      {
        result = num1/num2;
      }
    
  }
  else if (op == '%')
  {
    if (num2 == 0)
    {
        printf("divide by zero error\n");
        return 1;
    }
    else
    {
      result = num1 % num2;
    }
  }
  else
  {
    printf("invalid operator\n");
    return 1;
  } 
  printf("%d %c %d = %d\n", num1, op, num2, result);
  return 0;
}  