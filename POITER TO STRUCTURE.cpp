#include<stdio.h>
//#include<string.h>
struct student
{
	int roll_no;
	char name[20];
	float marks;
};
//struct student s={1,"Dipayan"};
int main()
{
	struct student s={1,"Dipayan",60};
	struct student *ptr=&s;
	printf("\n%d,%s,%f",ptr->roll_no,ptr->name,ptr->marks);
}

