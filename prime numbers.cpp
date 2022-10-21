#include<stdio.h>
int prime(int x,int i){
    if(x<=2) return 0;
    if(i==x) return 0;
    if(x%i==0) return 1;
    return prime(x,i+1);
}
int main(){
    int x,y;
    printf("ENTER UPPER AND LOWER BOUND: ");
    scanf("%d %d",&x,&y);
    printf("PRIME NUMBERS BETWEEN %d & %d ARE: ",x,y);
    for(int i=x;i<=y;i++){
        if(prime(i,2)==0)
            printf("%d ",i);
    }
}


