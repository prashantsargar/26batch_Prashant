/*WAP to create a function getdata() which contains the details of Vehical as vehical number,Vehical 
name,Average and fuel capacity. Display those vehicals which has avg>=15 km and fuel capacity is 
greater than 10 ltrs.*/

#include<iostream>
#include<string.h>
#include<iomanip>

using namespace std;

 class Vehical
 {
     public:
     int vehicalNum;
     char vehicalName[20];
     int avg;
     int fuelCapacity;

     void getdata(int vehicalNum,char vehicalName[],int avg,int fuelCapacity)
     {
         this->vehicalNum = vehicalNum;
         strcpy(this->vehicalName,vehicalName);
         this->avg = avg;
         this->fuelCapacity = fuelCapacity;
     }

     void display()
     {
         cout<<"\n"<<this->vehicalNum;
         cout<<setw(20)<<this->vehicalName;
         cout<<setw(20)<<this->avg<<" Km";
         cout<<setw(20)<<this->fuelCapacity<<" Ltrs";
     }
};

 void findByAvgandFuelCap(Vehical V[]);

int main()
{
    Vehical v[4];

    v[0].getdata(1049,"HF deluxe",80,20);
    v[0].display();
    v[1].getdata(5353,"Eicher",20,65);
    v[1].display();
    v[2].getdata(5474,"BMW New",25,70);
    v[2].display();
    v[3].getdata(7545,"XUV Old",8,65);
    v[3].display();

    cout<<"\n Vehical having avg>=15 km and fuel capacity is greater than 10 ltrs : ";
     findByAvgandFuelCap(v);
    

    return 0;
}

   void findByAvgandFuelCap(Vehical V[])
   {
       for(int i=0;i<4;i++)
       {
          if(V[i].avg>=15 && V[i].fuelCapacity>10)
          V[i].display();
       }
       
   }