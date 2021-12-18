#include <stdio.h>
#include <ctype.h>

char currency;
float amt;
float rupee;

int logic()
{

    if (currency == 'U')
    {
        printf("\nEnter Amount: ");
        scanf("%f", &amt);

        rupee = amt * 76.31;

        printf("\n$%.2f = ₹%.2f\n", amt, rupee);
    }
    else if (currency == 'A')
    {
        printf("\nEnter Amount: ");
        scanf("%f", &amt);

        rupee = amt * 20.78;

        printf("\nAED %.2f = ₹%.2f\n", amt, rupee);
    }
    else if (currency == 'C')
    {
        printf("\nEnter Amount: ");
        scanf("%f", &amt);

        rupee = amt * 11.97;

        printf("\n¥%.2f = ₹%.2f\n", amt, rupee);
    }
    else if (currency == 'E')
    {
        printf("\nEnter Amount: ");
        scanf("%f", &amt);

        rupee = amt * 85.78;

        printf("\n€%.2f = ₹%.2f\n", amt, rupee);
    }
    else if (currency == 'P')
    {
        printf("\nEnter Amount: ");
        scanf("%f", &amt);

        rupee = amt * 101.00;

        printf("\n£%.2f = ₹%.2f\n", amt, rupee);
    }
    else
    {
        printf("Error!");
    }

    return 0;
}

int main()
{

    printf("\nCurrency Calculator to INR ₹ as of 18 Dec 2021\n");

    printf("\n\n--------------------------------------");
    printf("\nUSD $ | GBP £ | AED د.إ| CNY ¥ | EUR € \n");
    printf("--------------------------------------\n\n");

    printf("Please Select Currency -> ");
    scanf("%c", &currency);

    currency = toupper(currency);

    logic();

    return 0;
}