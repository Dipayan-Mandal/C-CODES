#include<stdio.h>
int doct(int x,int c,int ans){
    if(x==0) return ans;
    ans+=(x%8)*c;
    return doct(x/8,c*10,ans);
}
int main(){
    int x;
    printf("ENTER A DECIMAL NUMBER: ");
    scanf("%d",&x);
    printf("OCTAL: %d",doct(x,1,0));
}

