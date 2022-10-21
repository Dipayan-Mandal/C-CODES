#include<stdio.h>
#include<conio.h>
int main()
{
int a,n,fact,num,sum=0,i;
printf("Enter the Number:");
scanf("%d",&num);
a=num;
sum=0;
while(a>0)
{
n=a%10;
fact=1;
for(i=1;i<=n;i++)
fact=fact*i;
sum=sum+fact;
a=a/10;
}
if(sum==num)
printf("\nspecial Number");
else
      printf("\n Not a special Number ");
}
