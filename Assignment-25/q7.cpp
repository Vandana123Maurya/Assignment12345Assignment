#include<iostream>
using namespace std;

class Greatest
{
   int x,y,z;
   public:
       void setValue(int x,int y,int z)
       {
           this->x=x;
           this->y=y;
           this->z=z;
       }
       void findGratest()
       {
           if(x>y)
           {
               if(x>z)
               {
                   cout<<x<<" is grater"<<endl;
               }
               else
                {
                   cout<<z<<" is grater"<<endl;
                }
           }
           else
            {
               if(y>z)
               {
                 cout<<y<<" is grater"<<endl;
               }
               else
               {
                   cout<<z<<" is grater"<<endl;
               }
            }
       }
};


int main()
{
    Greatest g1;
    g1.setValue(2,4,6);
    g1.findGratest();
    return 0;
}
