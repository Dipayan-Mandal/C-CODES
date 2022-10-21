/*#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a;
	    scanf("%d",&a);
	    if(a<=15)
	    printf("Yes");
	    else
	    printf("No");
	}
	return 0;
}*/
/*#include<stdio.h>
int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	int x[100];
	for(int i=0;i<t;i++){
	    scanf("%d",&x[i]);
	}
	for(int j=0;j<t;j++){
	    if(x[j]<=15){
            printf("Yes\n");
            }
	    else if(x[j]>15){
            printf("No\n");
            }
	}
	return 0;
}*/
/*#include <stdio.h>

int main(void) {
	// your code goes here
	int t,x,i;
	scanf("%d",&t);
//	if(t>=1 && t<=100)
	for(i=0;i<t;i++)
	{
	    scanf("%d",&x);
	    if(x>=1 && x<=100)
	    {
	    if(x<=15)
	    printf("YES\n");
	    else
	    printf("NO\n");
	    }
	}
	return 0;
}*/
#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
		int x;
	    scanf("%d",&x);
	    if(x<=15)
	    printf("YES\n");
	    else
	    printf("NO\n");
	    
	}
	return 0;
}



