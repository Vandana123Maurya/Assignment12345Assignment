#include<stdio.h>
#include<conio.h>
int main(){
int n;
printf("Enter month number::");
scanf("%d",&n);

switch(n)
  {
    case 1:
            printf("31 days in January month");
            break;
    case 2:
            printf("28 or 29 days in February month");
            break;
    case 3:
            printf("31 days in March month");
            break;
    case 4:
            printf("30 days in April month");
            break;
    case 5:
            printf("31 days in May month");
            break;
    case 6:
            printf("30 days in June month");
            break;
    case 7:
            printf("31 days in July month");
            break;
    case 8:
            printf("31 days in August month");
            break;
    case 9:
            printf("30 days in September month");
            break;
    case 10:
            printf("31 days in October month");
            break;
    case 11:
            printf("30 days in November month");
            break;
    case 12:
            printf("31 days in December month");
            break;
    default:
    printf("Please Enter number b/w 1 to 12");
}
getch();
}
