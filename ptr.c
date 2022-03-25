#include<stdio.h>
#include<math.h>
int main()
{
	int i,n,a[10],sum=0;
	float mean,sd,var=0;
	float *ptr;		
	printf("\n Enter Number of elements :");
	scanf("%d",&n);
	printf("\n Enter %d number of elements :",n);
	ptr=a;			
	for(i=0;i<n;i++)
	{
		scanf("%f",ptr);
		ptr++;		
	}
	ptr=a;					
	for(i=0;i<n;i++)
	{
		sum=sum+*ptr;
		ptr++;
  }    
  mean=sum/n;
  printf("the mean is %.2f: \n",mean);
	ptr=a;
	for(i=0;i<n;i++)
	{
    var=var+pow((*ptr-mean),2);
    ptr++;
  }
	var=var/n;
  printf("variance is %.2f\n'", var); 
	sd=sqrt(var);
  printf("standard deviation is: %.2f", sd); 
	return 0;
}

