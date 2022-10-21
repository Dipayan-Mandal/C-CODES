/*#include <stdio.h>

int main(void) {
	// your code goes here
	int x[100];
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	scanf("%d",&x[i]);
	for(int j=0;j<t;j++)
	{
	    if(x[j]<=7)
	    printf("Yes\n");
	    else
	    printf("No");
	}
	
	return 0;
}*/

/*#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int a;
		scanf("%d",&a);
		if(a<=7)
		printf("yes\n");
		else
		printf("no");
	}
	return 0;
}*/
#include <stdio.h>

int main(void) {
	int t,time;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
	    scanf("%d",&time);
	    if(time+3<=10)
	    {
	        printf("YES\n");
	    }
	    else{
	        printf("NO\n");
	    }
	}
	return 0;
}



