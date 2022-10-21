/*#include<stdio.h>
struct student
{
	int rollno;
	char name[20];
	int marks;
}s2;
int main()
{
	struct student s1={37,"dipayan",100};
	//struct student s2;
	scanf("%d",&s2.rollno);
	printf("%d\n",s2.rollno);
	printf("%d",s1.marks);
}*/

                                 //ARRAY OF STRUCTURE

/*#include<stdio.h>
struct student
{
	int rollno;
	char name[20];
	int marks;
};
int main()
{
	struct student s[3];
	for(int i=0;i<3;i++)
	{
		scanf("%d %s %d",&s[i].rollno,&s[i].name,&s[i].marks);
	}
	for(int i=0;i<3;i++)
	{
		printf("%d %s %d",s[i].rollno,s[i].name,s[i].marks);
	}
}*/

								//POINTERS ARRAY
								
#include<stdio.h>
struct student
{
	int rollno;
	char name[20];
	int marks;
};
struct student s={37,"dipayan",100};
int main()
{
	struct student s={37,"dipayan",100};
	struct student *ptr=&s;
	printf("%d",ptr->rollno);
}
