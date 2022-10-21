#include<stdio.h>
int main()
{
	int i=0,r,n;
	char hexa[100];
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%16;
		if(r<10)
		hexa[i]=r+48;
		else
		hexa[i]=r+55;
		i++;
		n=n/16;
	}
	for(i=i-1;i>=0;i--)
	printf("%c",hexa[i]);
}
