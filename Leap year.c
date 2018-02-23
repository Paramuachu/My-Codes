#include <stdio.h>
int main()
{
int a;
printf("Enter the Year :");
scanf("%d",&a);
if(a%4==0)
{
    if (a%100==0)
    {
        if(a%400==0)
        printf("Leap Year");
        else
        printf(" not a Leap year");
    }
    else
    printf("Leap year");
}
else
printf("Entered year is not a Leap year");
return 0;
}
