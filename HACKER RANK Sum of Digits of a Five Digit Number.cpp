#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int n,sum=0,a;
	printf("enter the num\n");
	scanf("%d",&n);
	while(n>0)
	{
		a=n%10;
		sum=sum+a;
		n=n/10;
	}
	printf("%d",sum);
	return 0;
}
/*#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int n,sum=0,i;
    scanf("%d", &n);
    for(i=n;i!=0;i=i/10)
    {
        sum=sum+(i%10);
        
    }
    printf("%d",sum);
    return 0;
}*/
	
   
