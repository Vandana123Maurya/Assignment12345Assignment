#include<stdio.h>
#include<conio.h>
int main(){
int n;
printf("Enter month number::");
scanf("%d",&n);
if(n>=1 && n<=12){
    if(n==1)
        printf("31 days in January month");
    else if(n==2)
        printf("28 or 29 days in February month");

    else if(n==3)
        printf("31 days in March month");

    else if(n==4)
        printf("30 days in April month");

    else if(n==5)
        printf("31 days in May month");

    else if(n==6)
        printf("30 days in June month");

    else if(n==7)
        printf("31 days in July month");

    else if(n==8)
        printf("31 days in August month");

    else if(n==9)
        printf("30 days in September month");

  else if(n==10)
        printf("31 days in October month");

   else if(n==11)
        printf("30 days in November month");

    else
        printf("31 days in December month");
}
else
    printf("Please Enter number b/w 1 to 12");
getch();
}
