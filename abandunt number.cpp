/*#include<stdio.h>
int main()
{
	int i,j,s;
	for(i=10;i<=100;i++)
	{
		for(j=1;j<i;j++)
		{
			if(i%j==0)
			{
				s=s+j;
			}
		}
		if(s>i)
		{
			printf("%d is a abandant number\n",i);
			s=0;
		}
		else
		{
			printf("%d is not a abandant number\n",i);
			s=0;
		}
	}
}*/
#include <stdio.h>

int main()
{
    int n,sum = 0;
    scanf("%d",&n);
    for(int i = 1; i <n; i++)
    {
        if(n % i == 0) 
            sum = sum + i; 
    }
if(sum > n)
 printf("%d is an Abundant Number\n",n);
else
 printf("%d is not a Abundant Number",n); 
} 
