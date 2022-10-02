#include<stdio.h>
#include<conio.h>

 struct Employee{
      int id;
      char name[10];
      int salary;
    };

    struct Employee input();
    void display(struct Employee);

int main()
{
   struct Employee e[3];
   int i;
   for(i=0;i<=2;i++)
       e[i]=input();
    sortSalary(e,3);
   getch();
}

struct Employee input(){
  struct Employee e1;
  printf("Enter id,name,salary\n");
    scanf("%d",&e1.id);
    fflush(stdin);
    gets(e1.name);
    scanf("%d",&e1.salary);
 return e1;
}




void sortSalary(struct Employee e[],int n)
{
    int i,j;
    struct Employee max;

      max=e[0];
    for(i=0;i<=n-1;i++)
    {
      if(max.salary<e[i].salary)
            {
               max=e[i];
            }

    }
    printf("highest salary %d",max.salary);
}



