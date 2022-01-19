/* WAP to declare a class Accessories. Input accno, name ,price ,warranty in months and display 
using the function viewAccessories(). Input 3 different accessories and apply discount of 5% */

#include<iostream>

using namespace std;
#include<string.h>

class Accessories
{
    public:
    int accno;
    char name[20];
    float price;
    int warranty;

    void addAccessories(int accno, char name[], float price, int warranty)
    {
        this->accno=accno;
        strcpy(this->name,name);
        this->price=price;
        this->warranty=warranty;
    }

    void viewacceseries()
    {
        cout<<"\n Acceseries Number : "<<this->accno;
        cout<<"\n Acceseries Name : "<<this->name;
        cout<<"\n Price : Rs."<<this->price;
        cout<<"\n Warranty : "<<this->warranty<<" months\n";
    }
};

float discount(Accessories a1, Accessories a2, Accessories a3);

int main()
{
    Accessories a1,a2,a3;

    a1.addAccessories(101,"Mouse",500,6);
    a1.viewacceseries();

    a2.addAccessories(102,"Spekar",700,8);
    a2.viewacceseries();

    a3.addAccessories(103,"Keybord",1200,12);
    a3.viewacceseries();

    float ans = discount(a1,a2,a3);
    cout<<"\n Total Bill with 5% discount = "<<ans;
    
    return 0;
}

  float discount(Accessories a1, Accessories a2, Accessories a3)
  {
      float dis,Totalbill;
      int sum = a1.price + a2.price + a3.price;
      dis = sum*5/100;
      Totalbill = sum - dis;
      return Totalbill;
  }