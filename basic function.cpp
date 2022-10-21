							//WITHOUT ARGUMENT WITHOUT RETURN TYPE

/*#include<stdio.h>
int main()
{
	void sum();
	sum();
}
void sum(void)
{
	int a=67,b=4;
	printf("%d",a+b);
}*/

								//WITHOUT ARGUMENT WITH RETURN TYPE
								
#include<stdio.h>
int main()
{
	int sum();
	int s=sum();
	printf("%d",s);
}
int sum(void)
{
	int a=7,b=5;
	return a+b;
}

								//WITH ARGUMENT WITHOUT RETURN TYPE
/*#include<stdio.h>
int main()
{
	void sum(int,int);
	int a=7,b=4;
	sum(a,b);
}
void sum(int a,int b)
{
	printf("%d",a+b);
}*/

								//WITH ARGUMENT WITH RETURN TYPE
								
/*#include<stdio.h>
int main()
{
	int sum(int,int);
	int a,b;
	int x=sum(a,b);
	printf("%d",x);
}
int sum(int y,int z)
{
	 y=7,z=7;
	return y+z;
}*/
