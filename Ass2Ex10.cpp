/* Create a class SBIBank. The Account holder wants to open FD type Account. In which The 
number of years and Amount is passed through argument in the function openFDaccount(). 
Input Account number in the format (SBI00XXXX) where X is the pin value of account holder and 
also input name of account older. [note : no. of years not compulsory it is by default 5 years] */

#include<iostream>
#include<conio.h>

using namespace std;


class SBIBank
{
    public:
    int years;
    int amt;

    void addyears(int years)
    {
        this->years=years;
    }

    void display()
    {
        cout<<" "<<years;
    }
};

int openFDaccount(int amt,int years);

int main()
{
    SBIBank s1;
    int amt,years;
    char ch1,ch2,ch3,ch4;

    cout<<"\n Enter Account number : SBI00";
    
    ch1 = getch();
    cout<<"X";

    ch2 = getch();
    cout<<"X";

    ch3 = getch();
    cout<<"X";

    ch4 = getch();
    cout<<"X";

    openFDaccount(amt,years);

    cout<<"\n Your account opened succesfully...";

    return 0;
}

   int openFDaccount(int amt,int years)
   {
       cout<<"\n Enter FD amount : ";
       cin>>amt;
        cout<<"\n Number of years : 5 years";
   }