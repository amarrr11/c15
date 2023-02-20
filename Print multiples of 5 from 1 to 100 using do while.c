//Print multiples of 5 from 1 to 100 using do while
#include<stdio.h>
int main()
{
int i=1;
do
{
if(i%5==0)
printf("%d ",i);
i++;
}while(i<=100);

return 0;
}
