#include<stdio.h>
#include<stdlib.h>
int main()
{
    char *str;
    int i=0,j=1;
    char c;

    str=(char*)malloc(sizeof(char));
    printf("Enter string:");
    while(c!='\n')
    {
        c=getc(stdin);
        printf("%c ",c);
        j++;
        str=(char*)realloc(str,j*sizeof(char));
        str[i]=c;
        i++;
    }
      str[i]='\0';


       printf("string is %s ",str);
       free(str);

    getch();
}
