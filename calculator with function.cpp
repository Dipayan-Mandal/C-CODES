#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

// Q1
float add(float x,float y){
    return x+y;
}
float sub(float x,float y){
    return x-y;
}
float mul(float x,float y){
    return x*y;
}
float di(float x,float y){
    return x/y;
}
int main(){
    float a,b;
    int x;
    while(1){
        printf("CALCULATOR:\n1.ADDITION\n2.SUBSTRACT\n3.MULTIPLY\n4.DIVISION\n5.EXIT\nENTER YOUR OPERATION:  ");
        scanf("%d",&x);
        if(x==5){
            printf("EXITING!");
            exit(0);
        }
        printf("ENTER TWO NUMBERS: ");
        scanf("%f %f",&a,&b);
        printf("RESULT: ");
        switch(x){
            case 1:
                printf("%f\n\n",add(a,b));
                break;
            case 2:
                printf("%f\n\n",sub(a,b));
                break;
            case 3:
                printf("%f\n\n",mul(a,b));
                break;
            case 4:
                if(b==0)
                    printf("Zero Division Error!\n\n");
                else
                    printf("%f\n\n",di(a,b));
                break;
            default:
                printf("Wrong Operation!\n\n");
        }
    }
    return 0;
}




