#include<string.h>
#include<stdio.h>
#include<conio.h>

int main(){
char str[100][100];
int i,n,x;
printf("Enter number for string:");
scanf("%d",&n);

printf("Enter %d IP address:\n",n);
for(i=0;i<=n;i++){
    gets(str[i]);
}
for(i=0;i<n;i++)
{
char *a=strtok(str[i],".");
while(a!=NULL)
{
    int x=atoi(a);
    if((x>=0)&&(x<=255))
    printf("%d ",x);
    a=strtok(NULL,".");
}
}
getch();
}
