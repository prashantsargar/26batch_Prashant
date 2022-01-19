/* WAP to declare two classes Shoppe and Customer. Input Name and Location of Shoppe, Name 
and Contact number of Customer. Display the details of Shop and Customer using a Function 
with object as Function Argument */

#include<iostream>
#include<string.h>
#include<iomanip>

using namespace std;

class Shoppe
{
    public:
    char shopname[50];
    char location[50];

};

class Customer
{
    public:
    char cName[20];
    long long contactNo;
};

void show(Shoppe s)
{
    cout<<"\n Shope Name : "<<s.shopname<<
    setw(25)<<"Location : "<<s.location;
}

void show(Customer c)
{
    cout<<"\n Customer Name : "<<c.cName
    <<setw(25)<<" Contact Number : "<<c.contactNo;
}



int main()
{
    Shoppe s1;
    Customer c1;
    strcpy(s1.shopname,"Patil Kirana");
    strcpy(s1.location,"Talewadi");
    show(s1);

    strcpy(c1.cName,"Prashant");
    c1.contactNo=7218850081;
    show(c1);

    return 0;
}