#include<string.h>
#include<stdio.h>
#include<conio.h>

int main()
{
  char str[5][20];
  char name[10];
  int i,f=0;
  printf("Enter 5 string:\n");
  for(i=0;i<5;i++)
  {
      gets(str[i]);
  }
  printf("Enter UserName\n");
    gets(name);

    for(i=0;i<5;i++)
    {
        if(strcmp(str[i],name)==0){
           printf("Find factorial\n");
           printf("factorial: %d",fact());
          f=1;
        }
    }
    if(f==0)
        printf("      invalid UserName         ");
        getch();

}

int fact(){
int n,f=1;
printf("Enter number:");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
    f=f*i;
}
return f;

}



