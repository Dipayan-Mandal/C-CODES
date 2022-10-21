#include<stdio.h>
int main()
{
	int i,x,a,b;
	scanf("%d",&x);
	for(i=0;i<x;i++)
	{
		scanf("%d%d",&a,&b);
		int total=a*10+b*5;
		printf("%d",total);
	}
}
/*int main()
{
	int t;
	scanf("%d",&t);
	int x[100];
	for(int i=0;i<t;i++)
	scanf("%d\n",&x[i]);
	for(int j=0;j<t;j++)
	scanf("%d",&x[j]);
	int total=x[i]*10+x[j]*5;
	printf("%d",total);
	
}*/
