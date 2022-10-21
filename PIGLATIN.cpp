#include<stdio.h>
#include<string.h>
int main()
{
	int i,pos;
	char str[25];
	printf("Enter a string\n");
	gets(str);
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'|| str[i] =='u')
		{
			pos=i;
			break;
		}
	}
	for(i=pos;i<strlen(str);i++)
	printf("%c",str[i]);
	for(i=0;i<pos;i++)
	printf("%c",str[i]);
}
