/* WAP to declare a class Hardware. Input hardware name and Price. Pass the Object to a function 
showHardware() and display the Details [Passing Object as Function Argument] */

#include<iostream>
#include<string.h>

using namespace std;

class Hardware
{
    public:
    char name[20];
    float price;
    
    void showHardware(Hardware h)
    {
        strcpy(this->name,name);
        this->price=price;
    }


};

int main()
{
    Hardware h1;

    strcpy(h1.name,"Mouse");
    h1.price = 500;

    cout<<"\n Hardware price : "<<h1.name;
    cout<<"\n Hardware price : "<<h1.price;
    
    return 0;
}
