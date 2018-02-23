#include<stdio.h>
int main()
{
    int i,N,K,j,s=0;
    printf("Enter the numbers");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    printf("%d",i);
     scanf("%d",&K);
    for(j=0;j<=K;j++)
    s=s+j;
    printf(" \n The sum is %d",s);
}
