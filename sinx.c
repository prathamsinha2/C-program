#include<stdio.h>
#include<math.h>
int main()
{
    float x,deg,num,den,term,sum=0;
    int i;
    printf("Enter Degree: ");
    scanf("%f", &deg);
    x = deg*(3.1428/180);
    i = 1;
    num = x;
    den = 1.0;
    term = x;
    sum = x;
    do
    {
        i = i+2;
        num = (-num)*x*x;
        den = den*i*(i-1);
        term = num/den;
        sum = sum + term;
    }
    while(fabs(term)>=0.001);
    printf("inbuilt sin(%.2f) = %.2f", deg, sin(x));
    printf("\n user defined sin(%.2f) = %.2f", deg, sum);
}