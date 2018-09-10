#include<stdio.h>

int main() 
{
   int N,i,a[10],max;
   scanf("%d",&N);
   for(i=0;i<=N;i++)
        {
             scanf("%d",&a[i]);
         }
   
    for(i=1;i<N;i++)
        {
         if(a[0]<a[i])
            {
             max=a[i];
            }
        }
   printf("%d",max);
   return 0;
   }
   
