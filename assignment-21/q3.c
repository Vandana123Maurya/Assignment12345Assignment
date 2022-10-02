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
   display(b1);
   display(b2);
   getch();
}

void display(struct Employee b){
printf("%d %s %f\n",b.id,b.name,b.salary);
}

struct Employee input(){
  struct Employee b1;
  printf("Enter id,name,salary\n");
    scanf("%d",&b1.id);
    fflush(stdin);
    gets(b1.name);
    scanf("%f",&b1.salary);
 return b1;
}
