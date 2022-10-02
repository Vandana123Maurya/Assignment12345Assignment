#include<string.h>
#include<stdio.h>
#include<conio.h>

int main(){
char str[100][100];
int i,n;
printf("Enter number for string:");
scanf("%d",&n);

printf("Enter %d string:\n",n);
for(i=0;i<=n;i++){
    gets(str[i]);
}
printf("\n");
for(i=0;i<=n;i++){
    printf("%s\n",str[i]);
}

}
