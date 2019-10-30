#include<stdio.h>
int main()
{
int i,sum=0;//initialize the sum
for(i=1;i<=10;i++)
{
if(i%2==0)//condition for even no
{
printf("i=%d\n",i);
sum=sum+i;
}
}
printf("sum=%d",sum);
return 0;
}
