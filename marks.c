#include<stdio.h>
struct student
{
int id;
float avg, marks[5];
char name[20];
};
int main()
{
  struct student s[20];
  int n, i, j, sum=0;
  printf("Enter number of entries");
  scanf("%d",&n);
  printf("Enter details of %d students:--- \n",n);
  for(i=0;i<n;i++)
  {
    printf("Enter student's name:---");
    scanf("%s", s[i].name);
    printf("Enter marks of 5 subjects:\n");
    for(j=0;j<5;j++)
      {
        scanf("%f",&s[i].marks[j]);
      }
  }
  for(i=0;i<n;i++)
    {
      for(j=0;j<5;j++)
        {
          sum=sum+s[i].marks[j];
        }
      s[i].avg=sum/5;
    }
  for(i=0;i<n;i++)
    {
      if(s[i].avg>=25.0)
      {
        printf("The student- %s; ID-%d is above average\n Average=%.2f", s[i].name, s[i].id, s[i].avg);
      }
      else
      {
        printf("The student- %s; ID-%d is below average\n Average=%f", s[i].name, s[i].id, s[i].avg);
      }
    }
  return 0;
}