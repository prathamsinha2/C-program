# include <stdio.h>
void main ()
{
    int n1,n2,res;
    char ch = ' ';
    printf ("enter the operation\n");
    scanf ("%c",&ch);
    printf ("enter the two values ( operands )\n");
    scanf ("%d%d",&n1,&n2);
    if ( ch == '+' )
    {
        res = n1 + n2 ;
    }
    else if ( ch == '-' )
    {
        res = n1 - n2 ;
    }
    else if ( ch == '*' )
    {
        res = n1 * n2 ;
    }
    else if ( ch == '/' )
    {
        if ( n2 != 0 )
        {
            res = n1 / n2 ;
        }
        else 
        {
            printf ("division by zero not possibble");
        }
    }
    else if ( ch == '%' )
    {
        if ( n2 != 0 )
        {
            res = n1 % n2 ;
        }
        else 
        {
            printf ("division by zero not possible");
        }
    }
    else 
    {
        printf (" invalid choice ");
    }
    printf (" the result =%d\n, res");
}

