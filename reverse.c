#include<stdio.h>
    int main()
    {
    
    int num, rem, reverse=0,temp;
    printf("Enter the number :");
    scanf("%d",&num);
    temp = num;
    while(num>0)
    {
            rem = num % 10;

        reverse = reverse * 10 + rem;

        num /= 10;
    }
       printf("%d \n",reverse);
      return 0;
    }
