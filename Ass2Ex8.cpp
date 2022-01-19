/* WAP to create a class Integer and declare a data member no. use different 3 objects to store the 
values and display maximum number from it. */

#include<iostream>

using namespace std;

class Integer
{
    public:
    int no;

    void addno(int no)
    {
        this->no=no;
    }

    void display()
    {
        cout<<" "<<no;
    }
};

int compare(Integer i1,Integer i2,Integer i3);

int main()
{
    Integer i1,i2,i3;

    cout<<"\n Given numbers : ";
    i1.addno(5);
    i1.display();

    i2.addno(7);
    i2.display();

    i3.addno(3);
    i3.display();

    int ans = compare(i1,i2,i3);
    
    return 0;
}

int compare(Integer i1,Integer i2,Integer i3)
{
    if(i1.no>i2.no && i1.no>i3.no)
   cout<<i1.no<<" \n First number is greater among the all..";
    else if(i2.no>i3.no)
    cout<<i2.no<<" \n Second number is greater among the all..";
    else
    cout<<i3.no<<" \n Third number is greater among the all..";
}