#include <stdio.h>
int main()
{
    int a,b;

    int result = 1;

    printf("Enter a base number: ");
    scanf("%d", &a);

    printf("Enter an exponent: ");
    scanf("%d", &b);

    while ( b!= 0)
    {
        result *= a;
        --b;
    }

    printf("Answer = %d", result);

    return 0;
}
