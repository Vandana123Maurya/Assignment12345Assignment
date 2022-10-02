#include<stdio.h>
#include<conio.h>

 struct Employee{
      int id;
      char name[10];
      float salary;
    };
int main()
{
   struct Employee b1;
   b1.id=1;
   strcpy(b1.name,"java");
   b1.salary=10000;
   display(b1);
   getch();
}
void display(struct Employee b){
printf("%d %s %f",b.id,b.name,b.salary);
}
