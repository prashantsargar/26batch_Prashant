/* WAP to create a class population with data members city and totalpopulation & member functions 
getdata() with arguments which accepts the values. Create 3 objects and Display the name of city which 
has maximum number of population. */

#include<iostream>
#include<string.h>

using namespace std;

 class Population
 {
    public:
    char membersCity[20];
    int total_Population;

    void getdata(char membersCity[],int total_Population)
    {
        strcpy(this->membersCity,membersCity);
        this-> total_Population = total_Population;
    }

    void display()
    {
        cout<<"\n "<<membersCity<<"\t"<<total_Population;
    }
 };

 Population maxPoplationCity(Population c1,Population c2,Population c3);
 
int main()
{
    Population c1,c2,c3;

    c1.getdata("Sangli",40000);
    c1.display();

    c2.getdata("Atpadi",25000);
    c2.display();

    c3.getdata("Pune",50000);
    c3.display();

    cout<<"\n City having maximum population is : ";
    Population ans = maxPoplationCity(c1,c2,c3);
    ans.display();
    return 0;
}
   
    Population maxPoplationCity(Population c1,Population c2,Population c3)
    {
        if(c1.total_Population>c2.total_Population && c1.total_Population > c3.total_Population)
        return c1;
        else if(c2.total_Population > c3.total_Population)
        return c2;
        else 
        return c3;
    }