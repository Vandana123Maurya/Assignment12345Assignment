#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{

  char username[10],password[10];
  int i,j,k,f=0;
   char str[3][2][20]=
   {
     {
        "aman","890"
     },
     {
        "harsh","109"
     },
     {
        "Amit","786"
     }
   };

  printf("Enter UserName and password for authentication:\n");

       gets(username);
       gets(password);

  for(i=0;i<=2;i++){
    if(strcmp(username,str[i][0])==0 && strcmp(password,str[i][1])==0){
        printf("Login Successful");
        f=1;
    }
  }
  if(f==0)
    printf("UserName or password not match");
    getch();
}
