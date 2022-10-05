#include<iostream>
using namespace std;
//class Product;


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
       int getD()
       {
           cout<<"getD() called"<<endl;
          return x+y;
       }
       void setData(int a,int b)
       {
           cout<<"setData() called"<<endl;
           x=a;
           y=b;
       }
};
class Item
{
private:
    int x;
public:
    Item()
    {
      cout<<"Default Constructor for item"<<endl;
    }
    Item(Product p)
    {

        cout<<"Item(product) called"<<endl;
        x=p.getD();
    }
    void display()
    {
        cout<<"display called x="<<x<<endl;
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
