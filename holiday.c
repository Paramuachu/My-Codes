#include <stdio.h>
#include <conio.h>
#include <string.h>
#include<stdlib.h>



int main()
{
    int a;
    scanf("%d",&a);
    
     switch(a)
    {
        case 1: 
            printf("Monday\t");
            printf("Working day");
            break;
        case 2: 
            printf("Tuesday\t");
            printf("Working day");
            break;
        case 3: 
            printf("Wednesday\t");
            printf("Working day");
            break;
        case 4: 
            printf("Thursday\t");
            printf("Working day");
            break;
        case 5: 
            printf("Friday\t");
            printf("Working day");
            break;
        case 6: 
            printf("Saturday\t");
            printf("Working day");
            break;
        case 7: 
            printf("Sunday\t");
            printf("Holiday");
            break;
        default: 
            printf("invalid");
            
            return 0;
    }
}
