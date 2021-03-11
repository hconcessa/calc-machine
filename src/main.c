
#include<stdio.h>

void main()
{
    unsigned int userInput;

RestartMenu:
    printf("\n\n");
    printMenu();

    printf("\nSelect which operation you want to do: ");
    scanf("%i", &userInput);

    while(userInput > 5 || userInput < 0) {
        printf("\nSelect a valid menu number.");
        scanf("%i", &userInput);
    }

    switch(userInput)
    {
    case 0:
        printf("\nBye!\n\n");
        exit(1);
        break;

    case 1:
        printf("\nEnter two numbers to sum:\n");
        sum();
        goto RestartMenu;
        break;

    case 2:
        printf("\nEnter two numbers to subtract:\n");
        subtract();
        goto RestartMenu;
        break;

    case 3:
        printf("\nEnter two numbers to division:\n");
        division();
        goto RestartMenu;
        break;

    case 4:
        printf("\nEnter two numbers to multiplicate:\n");
        multiplication();
        goto RestartMenu;
        break;

    case 5:
        printf("\nEnter the base and height of the triangle to calculate the area:\n");
        triangleArea();
        goto RestartMenu;
        break;

    default:
        printf("\nSelect a valid menu number.\n");
        goto RestartMenu;
        break;
    }
}

void printMenu()
{
    printDivisor();

    printf("\nOptions:\n\n");
    printf("(1) Sum\n");
    printf("(2) Subtraction\n");
    printf("(3) Division\n");
    printf("(4) Multiplication\n");
    printf("(5) Triangle Area\n");
    printf("\n(0) Exit\n");

    printDivisor();
    printf("\n");
}

void printDivisor()
{
    for(int i=0; i<30; i++)
    {
       printf("=");
    }
}

void sum()
{
    int x, y;
    scanf("%i", &x);
    scanf("%i", &y);

    int result = x+y;
    printf("\nSum > %i + %i = %i\n\n", x, y, result);
}

void subtract()
{
    int x, y;
    scanf("%i", &x);
    scanf("%i", &y);

    int result = x-y;
    printf("\nSub > %i - %i = %i\n\n", x, y, result);
}

void division()
{
    int x, y;
    scanf("%i", &x);

    do {
        scanf("%i", &y);
    } while (y == 0);

    float result = (float) x / y;
    printf("\nDiv > %i / %i = %.4f\n\n", x, y, result);
}

void multiplication()
{
    int x, y;
    scanf("%i", &x);
    scanf("%i", &y);

    float result = (float) x * y;
    printf("\nMul > %i * %i = %i\n\n", x, y, result);
}

void triangleArea()
{
    int x, y;
    scanf("%i", &x);
    scanf("%i", &y);

    float result = (float) (x * y) / 2;
    printf("\nThe triangle area is: %.4f\n\n", result);
}
