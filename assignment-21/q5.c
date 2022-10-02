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
   struct Employee e[5];
   int i;
   for(i=0;i<=4;i++)
       e[i]=input();

    sortSalary(e,5);

   for(i=0;i<=4;i++)
       printf("%d %s %d\n",e[i].id,e[i].name,e[i].salary);
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
    struct Employee t;
    for(i=0;i<=n-1;i++)
    {
        for(j=i+1;j<=n-1;j++)
        {
            if(e[i].salary>e[j].salary)
            {
                t=e[i];
                e[i]=e[j];
                e[j]=t;
            }
        }
    }
}



