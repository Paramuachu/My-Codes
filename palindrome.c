#include <stdio.h>
int main()
{
    int n, a = 0, b, org;

    printf("Enter an integer: ");
    scanf("%d", &n);

    org = n;

    while( n!=0 )
    {
        b= n%10;
        a = a*10 + b;
        n /= 10;
    }

    if (org == a)
        printf("%d is a palindrome.", org);
    else
        printf("%d is not a palindrome.", org);
    
    return 0;
}
