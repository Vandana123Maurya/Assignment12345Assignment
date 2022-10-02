#include<stdio.h>
#include<conio.h>
int main()
{
    char str[10];
    printf("Enter string:");
    gets(str);

    findLength(str);
    getch();
}
  findLength(char *str)
  {
      //printf("%s",str);
      int i;
      for(i=0;str[i];i++);
      printf("length %d",i);
  }
