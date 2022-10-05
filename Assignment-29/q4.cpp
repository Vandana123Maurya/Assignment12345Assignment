#include<iostream>
using namespace std;
class Item
{
  private:
    int x;
  public:
    Item()
    {

      cout<<"Default Constructor for item"<<endl;
    }
     Item(int x):x(x)
     {

     }

    void display()
    {
        cout<<"display called x="<<x<<endl;
    }

};

class Product
{
   private:
       int x;
       int y;
   public:
       Product()
       {
          cout<<"Default Constructor for product"<<endl;
       }
       void setData(int a,int b)
       {
           cout<<"setData() called"<<endl;
           x=a;
           y=b;
       }
       operator Item()
       {
           cout<<"Item"<<endl;
           Item i(x);
           return i;
       }
};

int main()
{
    Item i1;
    Product p1;
    p1.setData(3,4);
    i1=(Item)p1;
    i1.display();
    return 0;
}
