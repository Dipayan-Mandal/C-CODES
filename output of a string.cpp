/*#include<stdio.h>
#include<string.h>
int main()
{
	char *fun();
	fun();
	char *name;
	name=fun();
	printf("%s",name);
}
char *fun()
{
	char *name="dipayan";
	return name;
}*/

/*#include<stdio.h>
#include<string.h>
char *rev(char *name)
{
	return name;
}
int main()
{
	char name[100];
	char *reverse;
	scanf("%s",name);
	reverse=rev(name);
	printf("%s",reverse);
}*/

#include<stdio.h>
#include<string.h>
int main()
{
	char *fun();
	fun();
	char a;
	printf("%s",a);
}
char *fun()
{
	//char *name="dipayan";
	//char *goat="atanu";
	char a[30];
	char b[8];
	printf("enter name\n");
	gets(a);
	gets(b);
	strcat(a,b);
	printf("%s",a);
	return a;
}

