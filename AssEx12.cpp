/*WAP to find billammount with discount. Apply discount in following conditions
1. if price of product is greater than Rs.50 then apply discount 2.5%
2. if price of product is greater than Rs.100 then apply discount 5%
3. if price of product is greater than Rs.200 then apply discount 7% */

#include<iostream>

using namespace std;

 int findBybillamt(int billamt)
 {
     if(billamt>50 && billamt<=100)
     int Totalbillamt = billamt - (billamt*2.5/100);
     return -1;
      else if(billamt>100 && billamt<=200)
     int Totalbillamt = billamt - (billamt*5/100);
     return 0;
     else if(billamt>200)
     int Totalbillamt = billamt - (billamt*7/100);
     return 1;
 }

int main()
{
    float billamt,Totalbillamt;

    cout<<"\n Enter your Bill amount : ";
    cin>>billamt;

    int ans = findBybillamt(billamt);

    if(ans==-1)
    {
        cout<<"\n Your total bill amount = "<<Totalbillamt;
    }

     if(ans==0)
    { 
        cout<<"\n Your total bill amount = "<<Totalbillamt;
    }

    if(ans==1)
    {
         cout<<"\n Your total bill amount = "<<Totalbillamt;
    }
    return 0;
}