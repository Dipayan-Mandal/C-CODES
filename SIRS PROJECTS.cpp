/*#include<stdio.h>
//int calsum(int,int,int);
int main( )
{
	int a,b,c,sum;
	scanf("%d%d%d",&a,&b,&c);
	sum=calsum(a,b,c);
	printf("%d",sum);
}
int calsum(int x,int y,int z)
{
	//int d;
	//d=x+y+z;
	return x+y+z;
}*/
/*#include<stdio.h>
int main()
{
	char a[100];
	int x=0;
	printf("enter a string");
	gets(a);
	while(a[x]!='\0')
	{
		x++;
	}
	printf("length of string= %d",x);
}*/
/*#include<stdio.h>
#define max(a,b) ((a>b)?a:b)
int main()
{
	int a,b,high;
	printf("enter two number");
	scanf("%d %d",&a,&b);
	high=max(a,b);
	printf("max=%d",high);
}*/
/*#include<stdio.h>
#include<string.h>
int main()
{
	char a[50],b[50];
	printf("enter a string");
	gets(a);
	printf("enter a string");
	gets(b);
	if(strcmp(a,b)==0)
	{
		printf("both string are equal");
	}
	else
	{
		printf("both string are not equal");
	}
}*/


/*#include<stdio.h>
int main()
{
	int a[5]={3,4,7,8,1},i;
	int *p=a;
	for(i=0;i<5;i++)
	{
		printf("%d\n",*p++);
	}
	
}*/

/*#include<stdio.h>
int main()
{
	int n,m;
	int *p=&n;
	int *q=&m;
	printf("enter two numbers");
	scanf("%d %d",&n,&m);
	*p=*p+*q;
	*q=*p-*q;
	*p=*p-*q;
	printf("after swaping two values\n");
	printf("n=%d\nm=%d\n",*p,*q);
}*/

/*#include<stdio.h>
#define max(a,b) ((a>b)?a:b)
int main()
{
	int a,b,high,high1,c;
	printf("enter three number");
	scanf("%d %d %d",&a,&b,&c);
	high=max(a,b);
	high1=max(high,c);
	printf("max=%d",high1);
}*/

