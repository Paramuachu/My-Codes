#include <stdio.h>
 
int main()
{
    int a,temp,cnt;
 
    printf("Enter a number: ");
    scanf("%d",&a);
 
    cnt=0;
    temp=a;
 
    while(temp>0)
    {
        cnt++;
        temp/=10;
    }
 
    printf("Total numbers of digits are: %d in number: %d.",cnt,a);
     
    return 0;
}
