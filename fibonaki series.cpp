#include<stdio.h>
int fib(int x){
    if(x<=2)
        return 1;
    return fib(x-1)+fib(x-2);
}
int main(){
    int x,y;
    printf("ENTER A NUMBER: ");
    scanf("%d",&x);
    scanf("%d",&y);
    for(int j=y;j<x;j++){
        printf("%d ",fib(j));
    }
    return 0;
}

