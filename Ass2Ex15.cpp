/* WAP to create a class Customer and input Customer Id, name and City. Entry 5 Customers and
display the details [Array of Objects] */

#include<iostream>
#include<string.h>
#include<iomanip>

using namespace std;

class Customer
{
    public:
    int customerId;
    char name[20];
    char city[20];

    void addCustomer(int customerId,char name[],char city[])
    {
        this->customerId=customerId;
        strcpy(this->name,name);
        strcpy(this->city,city);
    }

    void show()
    {
        cout<<"\n "<<customerId
        <<setw(10)<<" "<<name
        <<setw(10)<<" "<<city;
    }
};
 
 int main()
 {
     Customer c[5];

     c[0].addCustomer(101,"Prashant","Atpadi");
     c[0].show();
     c[1].addCustomer(102,"Vyankatesh","Ichalkaranji");
     c[1].show();
     c[2].addCustomer(103,"Shubham","Shirol");
     c[2].show();
     c[3].addCustomer(104,"Shardul","Daphalapur");
     c[3].show();
     c[4].addCustomer(105,"Vishal","Nashik");
     c[4].show();

     return 0;
 }
