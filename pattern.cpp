/*#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int x=65;
    int y=0;
    for (int i = 0; i < n; i++)
    {
        x=65;
        y=x+(n-i-1);
        for (int j = 0; j < n*2; j++)
        {
            if (j<n)
            {
                if (j<n-i)
                {
                    printf("%c",x++);
                }
                else
                {
                    printf(" ");
                }
                
            }
            else
            {
                if (j<=n+i-1)
                {
                    printf(" ");
                }
                else
                {
                    printf("%c",y--);
                }
                
            }
            
        }
        printf("\n");
    }

    return 0;
}*/
/*#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n*2; j++)
        {
            if (j<n)
            {
                if (j<n-i)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
                
            }
            else
            {
                
                if (j<=n+i-1)
                {
                    printf(" ");
                }
                else
                {
                    printf("*");
                }
                
            }
            
        }
        printf("\n");
    }

    return 0;
}*/
/*#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=1;i<=4;i++)
	{
		k=1;
		for(j=1;j<=7;j++)
		{
			if(j>=5-i && j<=3+i)
			{
			printf("%d",k);
			j<4?k++:k--;
			}
			else
			printf(" ");
		}
		printf("\n");
	}
}*/
#include<stdio.h>
int main()
{
 int i,j;
 char k;
 for (i=1;i<=4;i++){
       k='A';
   for (j=1;j<=7;j++){
       if (j<=5-i || j>=3+i){
          printf("%c",k);
          j<4?k++:k--;
      }
      else
          printf (" ");
      }
   printf ("\n");
   }
}
