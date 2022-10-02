#include<string.h>
#include<stdio.h>
#include<conio.h>

int main(){
char str[100][100],s[20];;
int i,n,j,t=0;
printf("Enter number for string:");
scanf("%d",&n);

printf("Enter %d string:\n",n);
for(i=0;i<=n;i++){
    gets(str[i]);
}
printf("Enter string for search:");
gets(s);
for(i=0;i<=n;i++){
       if(strcmp(str[i],s)==0)
        {
         printf("this name is available");
         t=1;
         break;
        }
}
 if(t==0)
    printf("this name not is available");
getch();
}
