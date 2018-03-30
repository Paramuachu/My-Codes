#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
 int a,sum=0,r,q;
 printf("Enter the number to be tested: ");
 scanf("%d",&a);
 q=a;
 do
 {
      r=q%10;
      sum=sum+pow(r,2);
      q=q/10;
 }
 while(q%10!=0);
 printf("%d",sum);
 getch();


}
