/*#include<stdio.h>
struct demo
{
	int a;
	char b;
	float c;
};
int main()
{
	struct demo s={4,'R',9.12};
	printf("%d,%c,%f",s.a,s.b,s.c);
}*/
#include<stdio.h>
struct student
{
	int rollno;
	char name[];
	float marks;
};
void main()
{
	int i;
	struct student s[3];
	for(i=0;i<3;i++)
	{
	printf("roll=%d,name=%s,marks=%f",s[i].rollno,s[i].name,s[i].marks);
	scanf("%d,%s,%f",&s[i].rollno,&s[i].name,&s[i].marks);
}
	for(i=0;i<3;i++)
	{
	printf("%d,%c,%f",s[i].rollno,s[i].name,s[i].marks);
}
}
