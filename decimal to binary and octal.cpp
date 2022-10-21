#include<stdio.h>
#include<string.h>
int bi(int x,int c,int ans){
    if(x==0) return ans;
    ans+=(x%2)*c;
    return bi(x/2,c*10,ans);
}
int oct(int x,int c,int ans){
    if(x==0) return ans;
    ans+=(x%8)*c;
    return oct(x/8,c*10,ans);
}
int btodec(int x,int c,int ans){
    if(x==0) return ans;
    ans+=(x%10)*c;   
    return btodec(x/10,c*2,ans);
}
int otodec(int x,int c,int ans){
    if(x==0) return ans;
    ans+=(x%10)*c;   
    return otodec(x/10,c*8,ans);
}
int main(){
    int x,i_n,f_n;
    printf("\n1.DECIMAL\n2.BINARY\n3.OCTAL\nENTER INITIAL NUMBER SYSTEM: ");
    scanf("%d",&i_n);
    printf("\nENTER VALUE: ");
    scanf("%d",&x);
    printf("\n1.DECIMAL\n2.BINARY\n3.OCTAL\nENTER FINAL NUMBER SYSTEM: ");
    scanf("%d",&f_n);
    
    switch(i_n){
        case 1:
            break;
        case 2:
            x=btodec(x,1,0);
            break;
        case 3:
            x=otodec(x,1,0);
            break;
        default:
            printf("Wrong operation!");
        }
    printf("\n");
    switch (f_n){
        case 1:
            printf("DECIMAL VALUE: %d",x);
            break;
        case 2:
            printf("BINARY VALUE: %d",bi(x,1,0));
            break;
        case 3:
            printf("OCTAL VALUE: %d",oct(x,1,0));
            break;
        default:
            printf("Wrong operation!");
        }
}


