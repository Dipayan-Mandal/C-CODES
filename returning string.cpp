#include<stdio.h>
#include<string.h>
int main()
{
	char *fun();
	//fun();
	char *name;
	name=fun();
	printf("%s",name);
}
char *fun()
{
	char *n="dipayan";
	return n;
}
