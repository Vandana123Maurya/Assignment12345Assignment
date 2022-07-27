#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
int a,b,c,D;
float x,y;
printf("Enter value of a,b,c:");
scanf("%d%d%d",&a,&b,&c);
D=b*b-4*a*c;

switch(D>0){
  case 1:
      printf("Roots are real and distinct\n");
      x=(-b+sqrt(D))/(2*a);
      y=(-b-sqrt(D))/(2*a);
      printf("%f %f",x,y);
      break;
   case 0:
       switch(D==0){
       case 1:
           printf("both roots are equal\n");
             x=-b/(2.0*a);
              printf("%f",x);
             break;
        case 0:
           printf("both roots are imaginary");
       }
   }
}
