#include<string.h>
#include<stdio.h>
#include<conio.h>

int main(){
char str[100][100];
int i,n,j;
printf("Enter number for string:");
scanf("%d",&n);

printf("Enter %d Email address:\n",n);
for(i=0;i<=n;i++){
    gets(str[i]);
}

printf("\nValid Email id\n");
for(i=0;i<=n;i++){
       if(strchr(str[i],'@')!=0)
        {
         printf("%s\n",str[i]);

        }
}
getch();
}
