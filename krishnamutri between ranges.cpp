
#include<stdio.h>
#include<conio.h>
int main()
{
int n,d,fact,num,sum=0,i,start,end;
//for(n=1;n<=1000;n++){
//printf("Enter the Number:");
//scanf("%d",&num);
printf("enter starting number");
scanf("%d",&start);
printf("enter the last number");
scanf("%d",&end);
while(start<=end){
num=n;
//sum=0;
while(num!=0)
{
d=num%10;
fact=1;
for(i=1;i<=d;i++)
{
fact=fact*i;
}
sum=sum+fact;
num=num/10;
}
if(n==num)
printf("\nspecial Number is %d",n);
start++;
}
      //printf("\n Not a special Number ");
      getch();
}
