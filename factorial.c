#include <stdio.h>

int main()
{
    int num,count=1,fact=1;
    printf("Enter the number: ");
    scanf("%d",&num);
   
    while(count<=num)
    {
        fact=fact*count;
        count=count+1;
    }
    printf("Factorial of %d is:%d ",num,fact);
    return 0;
}

