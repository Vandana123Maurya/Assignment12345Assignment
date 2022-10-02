#include<stdio.h>
#include<conio.h>

 struct Students{
      int rollno;
      char name[10];
      int chem_marks;
      int math_marks;
      int phy_marks;
 };

    struct Students input();
    void display(struct Employee);

int main()
{
   struct Students s[10];
   int i,n;
    printf("Enter size of array");
   scanf("%d",&n);
   for(i=0;i<n;i++)
       s[i]=input();
   for(i=0;i<n;i++){
     float avg=(s[i].chem_marks+s[i].math_marks+s[i].phy_marks)/3.0;
      printf("%d %s %d %d %d\n percentage=%f%%\n",s[i].rollno,s[i].name,s[i].chem_marks,s[i].math_marks,s[i].phy_marks,avg);
   }
    getch();
}

struct Students input(){
  struct Students s1;
     printf("Enter roll no.:");
     scanf("%d",&s1.rollno);
     fflush(stdin);
     printf("Enter name:");
     gets(s1.name);
     printf("Enter Chemistry marks:");
     scanf("%d",&s1. chem_marks);
      printf("Enter Mathematics marks:");
     scanf("%d",&s1. math_marks);
      printf("Enter Physics marks:");
     scanf("%d",&s1. phy_marks);
     printf("\n");
 return s1;
}








