#include <stdio.h>

int main(){
    int a,b;
    printf("enter a number:");
    scanf("%d",&a);
    b=a%2;
    switch(b){
        case 0:
        printf("it is a even number");
        break;
        default:
        printf("it is odd number");
        break;
    }
    return 0;
}