#include<stdio.h>
int main()
{
	int a,b,i,j;
	//scanf("%d",&a);
	for(j=1;j<=25;j++){
		b=0;
	for(i=2;i<=j/2;i++)
	{
		if(j%i==0){
		b++;
		break;
	}
	}
	if(b==0 && j!=1)
	printf("%d\n",j);
}
}
