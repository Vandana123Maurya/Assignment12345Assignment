#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(){
int s1,s2,s3,ch;
while(1){
printf("1:Isosceles triangle\n");
printf("2:Right angled triangle\n");
printf("3:Equilateral triangle\n");
printf("4:Exit\n");
printf("****************************************************************\n");
printf("Enter your choice\n");
scanf("%d",&ch);

switch(ch){

    case 1: printf("Enter three sides:");
            scanf("%d %d %d",&s1,&s2,&s3);//2 2 3
            if(s1==s2||s2==s3||s3==s1){
               printf("It is isosceles triangle\n");
               printf("\n");
            }
            else{
               printf("It is not isosceles triangle\n");
               printf("\n");
            }
            break;


     case 2: printf("Enter three sides:");
             scanf("%d %d %d",&s1,&s2,&s3);// 4 3 5
             s1=s1*s1;
             s2=s2*s2;
             s3=s3*s3;
             if(s1+s2==s3||s1+s3==s2||s2+s3==s1){
                 printf("It is right angled triangle\n");
                 printf("\n");
             }
             else{
                 printf("It is not right angled triangle\n");
                 printf("\n");
             }
                 break;


     case 3: printf("Enter three sides:");
             scanf("%d %d %d",&s1,&s2,&s3);//4 4 4
             if(s1==s2 && s2==s3){
                 printf("It is Equilateral triangle\n");
                 printf("\n");
             }
             else{
                 printf("It is not Equilateral triangle\n");
                 printf("\n");
             }
                 break;

      case 4:exit(0);

     }
  }

getch();
}
