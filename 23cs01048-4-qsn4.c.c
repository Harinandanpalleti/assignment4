#include <stdio.h>

int main(){
    int a;
    printf("enter the number");
    scanf("%d",&a);
    switch(a){
        case 1:
        printf("monday");
        break;
        case 2:
        printf("tuesday");
        break;
        case 3:
        printf("wednesday");
        break;
        case 4:
        printf("thurday");
        break;
        case 5:
        printf("friday");
        break;
        case 6:
        printf("saturday");
        break;
        case 7:
        printf("sunday");
        break;
        default:
        printf("incorrect input");
        break;
    }
    return 0;
}