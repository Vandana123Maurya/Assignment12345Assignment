#include<stdio.h>
#include<conio.h>
int main(){
int ch,a,b;

while(1){
printf("1: Addition\n");
printf("2: Subtraction\n");
printf("3 Multiplication\n");
printf("4: Division\n");
printf("5: Exit\n");
printf("Enter your choice:");
scanf("%d",&ch);

switch(ch)
  {
    case 1:
            printf("Enter two number:");
            scanf("%d%d",&a,&b);
            printf("sum of %d and %d is %d\n",a,b,a+b);
              printf("****************************************\n");
            break;
    case 2:
            printf("Enter two number:");
            scanf("%d%d",&a,&b);
            printf("difference of %d and %d is %d\n",a,b,a-b);
              printf("****************************************\n");
            break;
    case 3:
            printf("Enter two number:");
            scanf("%d%d",&a,&b);
            printf("multiplication of %d and %d is %d\n",a,b,a*b);
            printf("****************************************\n");
            break;
    case 4:
            printf("Enter two number:");
            scanf("%d%d",&a,&b);
            printf("division of %d and %d is %d\n",a,b,a/b);
              printf("****************************************\n");
            break;

    default:
       exit(0);
}
}
getch();
}
