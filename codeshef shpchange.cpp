										//SHOPCHANGE
/*#include<stdio.h>
int main()
{
	int t;
	int x[100];
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	scanf("%d",&x[i]);
	for(int j=0;j<t;j++)
	printf("%d\n",100-x[j]);
}*/
#include <stdio.h>
int main()
{
    int testcase, num, i;
    scanf("%d", &testcase);
    for (i = 0; i < testcase; i++)
    {
        scanf("%d", &num);
        printf("%d\n", (100 - num));
    }

    return 0;
}
