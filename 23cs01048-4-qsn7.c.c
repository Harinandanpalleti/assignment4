#include <stdio.h>
int main()
{
    int age;
    double price;
    printf("Enter the age: ");
    scanf("%d", &age);
    if (age < 5)
    {
        price = 0.0;
    }
    else if (age >= 5 && age <= 12)
    {
        price = 20.0;
    }
    else if (age >= 13 && age <= 59)
    {
        price = 50.0;
    }
    else if (age >= 60)
    {
        price = 50.0 * 0.8;
    }
    else
    {
        printf("Invalid age!\n");
        return 0;
    }
    printf("The ticket price is: %.2f\n", price);
    return 0;
}
