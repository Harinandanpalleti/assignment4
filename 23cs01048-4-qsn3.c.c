#include <stdio.h>

int main()
{
    float score, balance, percent, intrest;
    printf("enter your credit score\n");
    scanf("%f", &score);
    printf("enter the balance\n");
    scanf("%f", &balance);
    if (score <= 600)
    {
        percent = 15;
        intrest = (percent / 100) * balance;
        printf("intrest:%f", intrest);
    }
    else if (score > 600 && score <= 750)
    {
        percent = 12;
        intrest = (percent / 100) * balance;
        printf("intrest:%f", intrest);
    }
    else if (score > 750)
    {
        percent = 10;
        intrest = (percent / 100) * balance;
        printf("intrest:%f", intrest);
    }
    return 0;
}