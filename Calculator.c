#include <stdio.h>
#include <ctype.h>

int main()
{

    float num1, num2;
    char mode;
    float equal;

    printf("\n\t\t\t*******************************************************");
    printf("\n\t\t\tA - Addition | S - Subtract | D - Divide | M - Multiply\n\n");
    printf("\t\t\t********************************************************\n");

    printf("\n\t\t\tSelect: ");
    scanf("%c", &mode);

    mode = toupper(mode);
    
    //Logic

    if (mode == 'A') //Add
    {
        printf("\n\t\t\tEnter First Number -> ");
        scanf("%f", &num1);

        printf("\n\t\t\tEnter Second Number -> ");
        scanf("%f", &num2);

        equal = num1 + num2;

        printf("\n\n\t\t\t------------------");
        printf("\n\t\t\t%.2f + %.2f = %.2f", num1, num2, equal);
        printf("\n\t\t\t------------------\n\n");
    }
    else if (mode == 'S') //Subtract
    {
        printf("\n\t\t\tEnter First Number -> ");
        scanf("%f", &num1);

        printf("\n\t\t\tEnter Second Number -> ");
        scanf("%f", &num2);

        equal = num1 - num2;

        printf("\n\n\t\t\t------------------");
        printf("\n\t\t\t%.2f - %.2f = %.2f", num1, num2, equal);
        printf("\n\t\t\t------------------\n\n");
    }
    else if (mode == 'D') //Divide
    {
        printf("\n\t\t\tEnter First Number -> ");
        scanf("%f", &num1);

        printf("\n\t\t\tEnter Second Number -> ");
        scanf("%f", &num2);

        equal = num1 / num2;

        printf("\n\n\t\t\t------------------");
        printf("\n\t\t\t%.2f / %.2f = %.2f", num1, num2, equal);
        printf("\n\t\t\t------------------\n\n");
    }
    else if (mode == 'M') //Multiply
    {
        printf("\n\t\t\tEnter First Number -> ");
        scanf("%f", &num1);

        printf("\n\t\t\tEnter Second Number -> ");
        scanf("%f", &num2);

        equal = num1 * num2;

        printf("\n\n\t\t\t------------------");
        printf("\n\t\t\t%.2f x %.2f = %.2f", num1, num2, equal);
        printf("\n\t\t\t------------------\n\n");
    }
    else
    {
        printf("\n\t\t\t******");
        printf("\n\t\t\tError!");
        printf("\n\t\t\t******\n\n");
    }

    return 0;
}
