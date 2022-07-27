#include<stdio.h>
#include<conio.h>
int main(){
float unit,amount=0,total=0;
printf("Enter unit:");
scanf("%f",&unit);
switch(unit<=50){
    case 1:
        amount=unit*0.5;
        break;
    case 0:
        switch(unit<=150){
          case 1:
            amount=25+(unit-50)*0.75;
            break;
           case 0:
               switch(unit<=250){
                 case 1:
                     amount=100+(unit-150)*1.20;
                     break;
                 case 0:
                    amount=220+(unit-250)*1.5;
                    break;

               }

        }
}
total=amount+amount*0.20;
printf("total amount=%f",total);
}
