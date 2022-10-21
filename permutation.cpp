#include<stdio.h>
int fact(int x){
    if(x<2)
        return 1;
    return fact(x-1)*x;
}
int main(){
    int n,r;
    printf("ENTER N AND R: ");
    scanf("%d %d",&n,&r);
    printf("%d",fact(n)/(fact(r)*fact(n-r)));
}
