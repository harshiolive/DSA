#include <stdio.h>

struct distance
{
    int km;
    int meters;
};

int main()
{
    int a, b;
    printf("Enter the 1st distance:");
    scanf("%d", &a);
    printf("\nEnter the 2nd distance:");
    scanf("%d", &b);
    int d = a+b;
    struct distance c;
    c.km = d/1000;
    c.meters = d%1000;
    printf("\n%d kilometers %d meters", c.km,c.meters);
    return 0;
}