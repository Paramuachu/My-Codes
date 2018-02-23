#include<stdio.h>
int main()
{
    int N,i=0,s=0;
    printf("Enter the number of digits");
    scanf("%d",&N);
    for(i=0;i<=N;i++)
    s=s+i;
    printf("The sum of %d Natural numbers is %d",N,s);
}
