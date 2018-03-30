#include<stdio.h>
#include<string.h>
 
int main(){
    char str[40];
    int i, j = 0;
    scanf("%s", str);
    for(i = 1; str[i] != '\0';i++){
        if(str[i-1] == str[i]){
            j = i-1;        
            j++;
            while(1){           
                if(str[j] == str[j+1])  
                    j++;
                else
                    break;
            }
            printf("%c\n", str[i]);
            i = j;
        }
    }
    if(j == 0){
        printf("No repeated character");
    }
    return 0;
}
