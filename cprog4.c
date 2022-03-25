/* An electricity board charges the following rates for the use of electricity: for the
first 200 units 80 paise per unit: for the next 100 units 90 paise per unit: beyond
300 units Rs 1 per unit. All users are charged a minimum of Rs. 100 as meter
charge. If the total amount is more than Rs 400, then an additional surcharge of
15% of the total amount is charged. Write a program to read the name of the user,
the number of units consumed, and print out the charges.
HARSHA DIWAKAR*/
#include <stdio.h>
#define meter_charge 100
int main ()
{
  float units, total;
  char name[25];
  
  printf("enter your name:");
  scanf("%[^\n]s", name);
  
  printf("enter the units consumed:");
  scanf("%f", &units);

  if (units < 0)
  {
    printf("invalid input\n");
    printf("retry with valid input...\n");
    return 1;
  }

  if (units <= 200)
  {
    total = (0.8*units) + meter_charge;
  }

  else if (units <= 300)
  {
    total = (0.8*200) + (units-200)*0.9 + meter_charge;
  }

  else 
  {
    total = (0.8*200) + (0.9*100) + (units-300) + meter_charge;
  }

  if (total > 400)
  {
    total = total + (total*0.15);
  }

  printf("--------\n");

  printf(" Name : %s\n", name);
  printf("no. of units: %.2f\n", units);
  printf("Total Bill Amount: Rs. %.2f\n", total);
}