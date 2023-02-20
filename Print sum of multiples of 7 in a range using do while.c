//Print sum of multiples of 7 in a range using do while
#include<stdio.h>
int main()
{
int i=1,m,sum=0;
printf("Enter max value= ");
scanf("%d",&m);
do
{
if(i%7==0)
sum=sum+i;
i++;
}while(i<=m);

printf("sum= %d ",sum);

return 0;
}
