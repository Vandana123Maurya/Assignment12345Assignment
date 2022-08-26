#include <stdio.h>
#include <string.h>

int main(){
    char str[20];
    int i,j;
    int f = 0;

    printf("Enter a string:");
   gets(str);

    j = strlen(str)-1;

    for(i=0;i < j ;i++){
        if(str[i] != str[j-i]){
            f = 1;
            break;
           }
        }

    if (f)
        printf("%s is not a palindrome", str);

    else
        printf("%s is a palindrome", str);

    getch();
}
