										//HELIUM3(8)

/*#include<stdio.h>
int main()
{
	int a,b,c,d,i,x;
	scanf("%d",&x);
	for(i=0;i<x;i++)
	{
		scanf("%d %d %d %d",&a,&b,&c,&d);
		int first=a*b;
		int second=c*d;
		if(first<=second)
		{
			printf("yes\n");
		}
		else
		printf("no\n");
	}
}*/

									//NOTEBOOK(9)
/*#include<stdio.h>
int main()
{
	int a,b,x,i;
	scanf("%d",&x);
	for(i=0;i<x;i++)
	{
		scanf("%d",&a);
		int total=a*10;
		printf("%d\n",total);
	}
}*/

								//TRAVELFAST(10)

/*#include<stdio.h>
int main()
{
	int a,b,x,i;
	scanf("%d",&x);
	for(i=0;i<x;i++)
	{
		scanf("%d %d",&a,&b);
		if(a>b)
		printf("\ncar");
		else if(a<b)
		printf("\nbike");
		else if(a=b)
		printf("\nsame");
	}
}*/

								//NIBBLE(11)
								
/*#include<stdio.h>
int main()
{
	int x,a;
	scanf("%d",&x);
	for(int i=0;i<x;i++)
	{
		scanf("%d",&a);
		if(a%4==0)
		printf("good");
		else
		printf("not good");
	}
}*/

								//QUALIFY(12)
								
/*#include<stdio.h>
int main()
{
	int x,i,a,b,c;
	scanf("%d",&x);
	for(i=0;i<x;i++)
	{
		scanf("%d%d%d",&a,&b,&c);
		int k=b*1+c*2;
		if(a==k || a<k)
		printf("\nQualify");
		else
		printf("\nNotQualify");
	}
}*/
								//DISCUS(13)
/*#include<stdio.h>
int main()
{
	int x,i,a,b,c;
	scanf("%d",&x);
	for(i=0;i<x;i++)
	{
		scanf("%d%d%d",&a,&b,&c);
		if(a>b)
		{
			if(a>c)
			printf("%d",a);
			else
			printf("%d",c);
		}
		else
		{
			if(b>c)
			printf("%d",b);
			else
			printf("%d",c);
		}
	}	
}*/

									//MOVIE2X(14)
									
/*#include<stdio.h>
int main()
{
	int a,b;
	for(int i=0;i<1;i++)
	{
		scanf("%d %d",&a,&b); 
		int x=a-b;
		int y=b/2;
		printf("%d",x+y);
	}		
}	*/

									//VALENTINE(15)
									
/*#include<stdio.h>
int main()
{
	int x,a,b;
	scanf("%d",&x);
	for(int i=0;i<x;i++)
	{
		scanf("%d %d",&a,&b);
		int k=a/b;
		printf("%d",k);
	}
}*/

								//BATH(16)
								
/*#include<stdio.h>
int main()
{
	int x,a,b;
	scanf("%d",&x);
	for(int i=0;i<x;i++)
	{
		scanf("%d %d",&a,&b);
		printf("%d",a/(b*2));
	}
}*/

								//BLACKJACK(17)
								
/*#include<stdio.h>
int main()
{
	int x,a,b,c;
	scanf("%d",&x);
	for(int i=0;i<x;i++)
	{
		scanf("%d %d",&a,&b);
		int x=21-(a+b);
		if(x<=10)
		printf("%d",x);
		else
		printf("-1");
	}
}*/

								//CHESSDIST(18)
								
/*#include<stdio.h>
#include<stdlib.h>
#define Max(a,b) (a>b?a:b)
int main()
{
	int x,a,b,c,d;
	scanf("%d",&x);
	for(int i=0;i<x;i++)
	{
		scanf("%d%d%d%d",&a,&b,&c,&d);
		int z=abs(a-c);
		int y=abs(b-d);
		int k=Max(z,y);
		printf("%d",k);
	}
}*/

						//PASSORFAIL(20)
						
/*#include<stdio.h>
int main()
{
	int x,a,b,c;
	scanf("%d",&x);
	for(int i=0;i<x;i++)
	{
		scanf("%d%d%d",&a,&b,&c);
		int y=b*3;
		int z=a-b;
		//int k=z;
		if(y-z>=c)
		printf("pass");
		else
		printf("fail");
	}
}*/

								//FBC(1)
/*#include<stdio.h>
int main()
{
	int x,a,b,c;
	scanf("%d",&x);
	for(int i=0;i<x;i++)
	{
		scanf("%d%d",&a,&b);
		printf("%d",a-b);
	}
}*/

							//TYRE(2)
/*#include<stdio.h>
int main()
{
	int x,a,b,c;
	scanf("%d",&x);
	for(int i=0;i<x;i++)
	{
		scanf("%d%d",&a,&b);
		int z=a*2+b*4;
		printf("%d",z);
	}
}*/

							//SELFDEF(19)

#include <stdio.h>

/*int main(void) {
	int x,i,j,k,n,c;
	scanf("%d\n",&x);
	for(i=0;i<x;i++)
	{
	    scanf("%d\n",&n);
	    int x[n];
	    for(j=0;j<n;j++)
	    {
	        scanf("%d ",&x[j]);
	    }
	    for(k=0;k<n;k++)
	    {
	        if(x[k]>=10 && x[k]<=60)
	        c++;
	    }
	    printf("%d\n",c);
	}
	return 0;
}*/

/*int main(void) {
	int x;
    scanf("%d",&x);
    for(int i=0;i<x;i++)
    {
        int n, z=0;
        scanf("%d",&n);
        for(int j=0;j<n;j++)
        {
           int x;
           scanf("%d",&x); 
           if(x>=10 && x<=60)
            z++;
        }
           printf("%d\n",z);
    }
	return 0;
}*/

										//MINCOINS(NEW)

/*#include <stdio.h>
int main(void) {
    int t,a,b;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        
        scanf("%d",&a);
        if(a%5==0 && a%10==0)
        {
            b=a/10;
            printf("%d\n",b);
        }
         else if(a%5==0 && a%10!=0)
         {
            b=(a/10)+1;
            printf("%d\n",b);
         }
         else if(a%5!=0 && a%10!=0)
         {
            printf("-1\n");
         }
    }
	return 0;
}*/

									//SALE2
									
/*#include<stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	for(int i=0;i<x;i++)
	{
		int a,b;
		scanf("%d %d",&a,&b);
		int k=a-a/3;
		printf("%d",k*b);
	}
}*/


										//CHEFCHOCO(NEW)
										
/*#include <stdio.h>

int main(void) {
	int t,c,x,y,a;
	scanf("%d\n",&t);
	while(t--)
	{
	    scanf("%d %d %d\m",&c,&x,&y);
	    a=(c-x)*y;
	    printf("%d\n",a);
	}
	return 0;
}*/

									//CHEFBOTTLE(NEW)
									
/*#include <stdio.h>

int main(void) {
    int t,n,x,k;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d%d%d",&n,&x,&k);
        if(n<=(k/x)){
        printf("%d\n\n",n);
        }
        else{
            printf("%d\n\n",k/x);
        }
    }
	return 0;
}*/

										//Cyclic Quadrilateral(21)

/*#include <stdio.h>

int main(void) {
    int x,a,b,c,d;
    scanf("%d",&x);
    for(int i=0;i<x;i++)
	{
        scanf("%d%d%d%d",&a,&b,&c,&d);
		if(a+c==180 && b+d==180)
		printf("\nyes");
		else
		printf("\nno");
	}
}*/

						    //Too many items(22)
						    
/*#include<stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	for(int i=0;i<x;i++)
	{
		int a,k;
		scanf("%d",&a);
		k=a/10;
		if(a%10==0)
		printf("%d",k);
		else
		printf("%d",k+1);
	}
}*/

								//Black cells in a chessboard(23)
								
/*#include<stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	int k=(x*x)/2;
	printf("%d",k);
}*/

							//Possible Victory 
							
/*#include<stdio.h>
int main()
{
	//int x;
	//scanf("%d",&x);
	for(int i=0;i<1;i++)
	{
		int a,b,c;
		scanf("%d %d %d",&a,&b,&c);
		int k=20-b;
		int p=k*6*6;
		int q=c+p;
		if(q>a)
		printf("yes");
		else
		printf("no");
}
}*/
