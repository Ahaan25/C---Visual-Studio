#include<stdlib.h>
#include<conio.h>
#include<iostream.h>
#include<stdio.h>
int main()
{
    int d, m, y, D;
    printf("\nEnter Day of the Month: ");
    scanf("%d", &d);
    printf("\nEnter Month (1-12): ");
    scanf("%d", &m);
    printf("\nEnter Year: ");
    scanf("%d", &y);
    if (d > 31 || d < 1)
    {
        printf("Please enter Valid Input ");
    }
    if (m > 13 || m < 1)
    {
        printf("Please enter Valid Input ");
    }
    if (y > 2100 || y < 2000)
    {
        printf("Please enter Valid Input ");
    }
    if (m == 1)
    {
        D = ((y - 2000) * 365 + (y - 2000) / 4 + (m - 1) + (d - 1)) % 7;
    }

    else if (m == 2)
    {
        D = ((y - 2000) * 365 + (y - 2000) / 4 + (m - 1) + (d - 1) + 2) % 7;
    }
    else if (m == 3)
    {
        D = ((y - 2000) * 365 + (y - 2000) / 4 + (m - 1) + (d - 1) + 2) % 7;
    }
    else if (m == 4)
    {
        D = ((y - 2000) * 365 + (y - 2000) / 4 + (m - 1) + (d - 1) + 4) % 7;
    }
    else if (m == 5)
    {
        D = ((y - 2000) * 365 + (y - 2000) / 4 + (m - 1) + (d - 1) + 5) % 7;
    }
    else if (m == 6)
    {
        D = ((y - 2000) * 365 + (y - 2000) / 4 + (m - 1) + (d - 1) + 7) % 7;
    }
    else if (m == 7)
    {
        D = ((y - 2000) * 365 + (y - 2000) / 4 + (m - 1) + (d - 1) + 8) % 7;
    }
    else if (m == 8)
    {
        D = ((y - 2000) * 365 + (y - 2000) / 4 + (m - 1) + (d - 1) + 10) % 7;
    }
    else if (m == 9)
    {
        D = ((y - 2000) * 365 + (y - 2000) / 4 + (m - 1) + (d - 1) + 12) % 7;
    }
    else if (m == 10)
    {
        D = ((y - 2000) * 365 + (y - 2000) / 4 + (m - 1) + (d - 1) + 13) % 7;
    }
    else if (m == 11)
    {
        D = ((y - 2000) * 365 + (y - 2000) / 4 + (m - 1) + (d - 1) + 15) % 7;
    }
    else if (m == 12)
    {
        D = ((y - 2000) * 365 + (y - 2000) / 4 + (m - 1) + (d - 1) + 16) % 7;
    }

    if (D == 0)
    {
        printf("It is a Saturday");
    }
    else if (D == 1)
    {
        printf("It is a Sunday");
    }
    else if (D == 2)
    {
        printf("It is a Monday");
    }
    else if (D == 3)
    {
        printf("It is a Tuesday");
    }
    else if (D == 4)
    {
        printf("It is a Wednesday");
    }
    else if (D == 5)
    {
        printf("It is a Thursday");
    }
    else if (D == 6)
    {
        printf("It is a Friday");
    }

    return 0;
}