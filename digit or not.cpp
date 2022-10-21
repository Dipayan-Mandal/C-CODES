#include<stdio.h>
#include<string.h>
int check(int c){
    if(c>=48 && c<=57)
        return 1;
    return 0;
}
int main(){
    int c=0;
    char str[100];
    printf("ENTER TEXT: ");
    scanf("%[^\n]s",str);
    for(int i=0;i<strlen(str);i++){
        c+=check(str[i]);
    }
    printf("COUNT OF NUMBERS: %d",c);
}



