#include<stdio.h>
#include<conio.h>

 struct Students{
      int rollno;
      char name[10];
      int fees;
    };

    struct Students input();
    void display(struct Employee);

int main()
{
   struct Students s[100];
   int i;
   for(i=0;i<10;i++)
       s[i]=input();
   for(i=0;i<10;i++)
      printf("%d %s %d\n",s[i].rollno,s[i].name,s[i].fees);

    getch();
}

struct Students input(){
  struct Students s1;
  printf("Enter rollno,name,fees\n");
    scanf("%d",&s1.rollno);
    fflush(stdin);
    gets(s1.name);
    scanf("%d",&s1.fees);
 return s1;
}








