#include<stdio.h>
int main()
{
	int x[100];
	for(int i=0;i<3;i++)
	scanf("%d",&x[i]);
	for(int j=0;j<1;j++)
	{
	scanf("%d",&x[j]);
	}
	if(x[j]==x[i])
	printf("yes\n");
	else
	printf("no\n");
}

