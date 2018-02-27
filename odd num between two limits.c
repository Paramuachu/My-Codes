#include <stdio.h>

int main()
{
    int a,b,i;
    printf("Enter the limits :");
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
    if(i%2==1)
    printf("\t%d",i);
    }
    return 0;
}
