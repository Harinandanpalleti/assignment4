
#include <stdio.h>
int main()
{
    int num, sum = 0,temp;
    printf("Enter a 3 digit number: ");
    scanf("%d", &num);
    temp=num;
    if (num >= 100 && num <= 999)
    {
        while (num > 0)
        {
            sum = sum + (num % 10) * (num % 10) * (num % 10);
            num = num / 10;
        }
        if (sum == temp)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    else
    {
        printf("incorrect input\n");
    }
    return 0;
}
