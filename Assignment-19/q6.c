#include <stdio.h>
#include <string.h>

int main(){
    char str[10][20];
    int i,j,l,f;
    printf("Enter 3 string:");
    for(i=0;i<=2;i++)
        gets(str[i]);

    for(i=0;i<=2;i++)
        {
          l=strlen(str[i]);
          f=0;
          j=0;
          while(l>j)
          {
              if(str[j++]!=str[--l]){
                f=1;
                break;
              }
          }
          //printf("%d ",f);
          if(f==0)
            printf("%s palindrome",str[i]);
        }




    getch();
}
