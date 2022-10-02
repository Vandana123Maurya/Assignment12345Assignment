#include<stdio.h>
#include<conio.h>

 struct Employee{
      int id;
      char name[10];
      float salary;
    };

    struct Employee input();
    void display(struct Employee);

int main()
{
   struct Employee b1,b2;
   b1=input();
   b2=input();
   getch();
}
struct Employee input(){
  struct Employee b1;
  printf("Enter id,name,salary\n");
    scanf("%d",&b1.id);
    fflush(stdin);
    gets(b1.name);
    scanf("%f",&b1.salary);
}
