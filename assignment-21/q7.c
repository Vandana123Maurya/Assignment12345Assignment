#include<stdio.h>
#include<conio.h>

struct Time{
   int hr;
   int min;
   int sec;

};
    struct Time InputTime();
    void diffrenceOfTime(struct Time,struct Time,struct Time);
int main()
{
    struct Time t1,t2,d;
    t1=InputTime();
    t2=InputTime();
    diffrenceOfTime(t1,t2,d);
}

struct Time InputTime(){
    struct Time t;
    printf("Enter hour and minutes or second\n");
    scanf("%d",&t.hr);
    scanf("%d",&t.min);
    scanf("%d",&t.sec);
    return t;
}
diffrenceOfTime(struct Time t1,struct Time t2,struct Time d)
{
    printf("%d:%d:%d\n",t1.hr,t1.min,t1.sec);
    printf("%d:%d:%d\n",t2.hr,t2.min,t2.sec);
    while(t2.sec > t1.sec)
    {
        --t1.min;
        t1.sec += 60;
    }
    d.sec = t1.sec - t2.sec;

    while(t2.min>t1.min)
    {
        --t1.hr;
        t1.min+=60;
    }
     d.min=t1.min-t2.min;
     d.hr=t1.hr-t2.hr;

          printf("%d:%d:%d",d.hr,d.min,d.sec);
}
