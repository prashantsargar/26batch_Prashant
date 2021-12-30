/* WAP to create a class temperature with member fuctions gettemp1() which accepts the temprature in 
fahreinheit and converts it to centigrade and another function gettemp2() which accepts the 
temperature in centigrade and converts it to fahreinheit.Display the temperature in both units using 
display() function. */

#include<iostream>

using namespace std;

 class Temperature
 {
     public:
     float temp1;
     float temp2;

     float gettemp1(float temp1)
     {
        float ans1 = (temp1 - 32)*5/9;
        return ans1;
     }

     float gettemp2(float temp2)
     {
        float ans2 = temp2*9/5;
        return ans2;
     }

     void display()
     {
         float ans1 = gettemp1(50);
         float ans2 = gettemp2(50);
         cout<<"\n Temperature in celceious : "<<ans1;
         cout<<"\n Temperature in Fahreinheit : "<<ans2;
     }
 };

int main()
{
    Temperature t1,t2;
    
    t1.gettemp1(50);
    t2.gettemp2(50);

    t1.display();
    t2.display();

    return 0;
}