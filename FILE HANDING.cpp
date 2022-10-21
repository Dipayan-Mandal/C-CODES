                          
                                 //FILE HANDNG WITH CHARECTER
/*#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	FILE *fp=NULL;
	char ch='a';
	fp=fopen("abc.tex","w");
	if(fp==NULL)
	{
	printf("error");
	exit(1);
}
fputc(ch,fp);
fclose(fp);
}*/

                          //FILE HANDING WITH STRING         

/*#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	FILE *fp=NULL;
	char str[50];
	//int i;
	fp=fopen("abc.tex","w");
	if(fp==NULL)
	{
	printf("error");
	exit(1);
}
printf("enter the string");
gets(str);
fputs(str,fp);
//for(i=0;i!=strlen(str);i++)
//fputc(str[i],fp);
fclose(fp);
}*/



#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	FILE *fp;
	char str[50];
	char ch='s';
	int a=10;
	fp=fopen("abc.tex","w");
	/*if(fp==NULL)
	{
	printf("error");
	exit(1);
}*/
printf("enter the string");
gets(str);
//for(i=0;i!=strlen(str);i++)
//fputc(str[i],fp);
fprintf(fp,"%d %s %c",a,str,ch);
fclose(fp);
}
