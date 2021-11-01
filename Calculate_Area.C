#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{

    /*
    Square = Length x Length
    Rectangle = Length x Width
    Circle = PI x radius x radius
    Parallelogram = Base x height
    Trapezium = 1/2 x (a+b) × h
    */

    float l, w, r, b, h, area;
    const float PI = 3.14;
    char unit;

    printf("************************\n");
    printf("Calculate Area of Shapes\n");
    printf("************************\n");
    //Unit of measurement selection
    printf("\n-------------------------------------------------------------------------------");
    printf("\n| S = Square | R = Rectangle | C = Circle | P = Parallelogram | T = Trapezium |\n");
    printf("-------------------------------------------------------------------------------");
    printf("\n\nEnter unit of measurement here = ");
    scanf("%c", &unit);

    printf("You choose -> %c\n", unit);
    //===========================================

    unit = toupper(unit);

    if (unit == 'S') //Square
    {
        printf("\nEnter Length -> ");
        scanf("%f", &l);
        area = l * l;
        printf("\nArea of a Square = %.2f\n", area);
    }
    else if (unit == 'R') //Rectangle
    {
        printf("\nEnter Length -> ");
        scanf("%f", &l);

        printf("\nEnter Width -> ");
        scanf("%f", &w);

        area = l * w;
        printf("\nArea of a Rectangle = %.2f\n", area);
    }
    else if (unit == 'C') //Circle
    {
        printf("\nEnter Radius -> ");
        scanf("%f", &r);

        area = PI * r * r;
        printf("Area of a Circle = %.2f\n", area);
    }
    else if (unit == 'P') //Parallelogram
    {
        printf("\nEnter Base -> ");
        scanf("%f", &b);

        printf("\nEnter Height -> ");
        scanf("%f", &h);

        area = b * h;
        printf("Area of a Parallelogram = %.2f\n", area);
    }
    else if (unit == 'T') //Trapezium
    {
        printf("\nEnter A -> ");
        scanf("%f", &l);

        printf("\nEnter B -> ");
        scanf("%f", &w);

        printf("\nEnter Height -> ");
        scanf("%f", &h);

        area = 0.5 * (l + w) * h;
        printf("Area of a Trapezium = %.2f\n", area);
    }
    else
    {
        printf("Enter a valid unit of measurement!\n");
    }
    
    system("pause");
    return 0;
}