/* WAP to create a class branch with data members branch ID, branch Name, Branch City and member 
functions as getdata() and Display() */

#include<iostream>
#include<string.h>

using namespace std;

 class Branch
 {
     public:
     int branchId;
     char branchName[20];
     char branchCity[20];

     void getdata(int branchId,char branchName[],char branchCity[])
     {
         this->branchId = branchId;
         strcpy(this->branchName,branchName);
         strcpy(this->branchCity,branchCity);
     }

     void display()
     {
         cout<<"\n Branch ID : "<<this->branchId;
         cout<<"\n Branch Name : "<<this->branchName;
         cout<<"\n Branch City : "<<this->branchCity;     
     }

 };

int main()
{
    Branch b1,b2;

    b1.getdata(101,"BOI Vishrambag","Sangli");
    b1.display();

    b2.getdata(102,"SBI Atpadi","Atpadi");
    b2.display();

    return 0;
}