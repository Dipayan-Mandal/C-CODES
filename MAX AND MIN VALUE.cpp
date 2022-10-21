#include<stdio.h> 
int main() 
{ 
int a,b,c,max,min; 
printf("Enter three numbers: "); 
scanf("%d%d%d",&a,&b,&c);   
printf("\n"); 
max=(a>b)?((a>c)?a:c):((b>c)?b:c); 
printf("%d is maximum value between the three numbers",max); 
min=(a<b)?((a<c)?a:c):((b<c)?b:c);  
printf("\n%d is minimum value between the three numbers",min);
}
