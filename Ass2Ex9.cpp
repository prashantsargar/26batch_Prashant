//WAP to declare a class Temperature and display Temperature in Centigrade and Fahrenheit.

#include<iostream>

using namespace std;

class Temperature
{
   public:
   int temp;

   void addtemp(int temp)
   {
       this->temp = temp;
   }

   void display()
   {
       cout<<" "<<temp;
   }
};

int main()
{
    Temperature t1,t2;

    cout<<"\n Temperature in Celceious : ";
    t1.addtemp(45);
    t1.display();

    cout<<"\n Temperature in Faharenheit : ";
    t2.addtemp(67);
    t2.display();

    return 0;
}