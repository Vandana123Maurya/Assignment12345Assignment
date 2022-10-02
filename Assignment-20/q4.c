#include<stdio.h>
#include<conio.h>

int main()
{
   int a,b;
   int *p1,*p2;
   printf("Enter two number:\n");
   scanf("%d%d",&a,&b);
   p1=&a;
   p2=&b;
   printf("value of a %d\n",a);
   printf("address of a %x\n",&a);
   printf("address of pointer p1 %x\n",p1);
   printf("value of pointer p1 %d\n\n",*p1);

   printf("value of b %d\n",b);
   printf("address of b %x\n",&b);
   printf("address of pointer p2 %x\n",p2);
   printf("value of pointer p2 %d",*p2);
   getch();
}
