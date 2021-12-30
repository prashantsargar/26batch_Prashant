/* WAP to input price,qty and create a fuction calculate() with arguments which accepts the price and qty 
and calculates Bill amount. Return the bill ammount. Display Total. */

#include<iostream>

using namespace std;

 calculate(float price,int qtys)
 {
     int Totalbill_Amt;
     Totalbill_Amt = price*qtys;

     return Totalbill_Amt;

 }

int main()
{
    float price;
    int qtys;

    cout<<"\n Enter price of product : ";
    cin>>price;

    cout<<"\n Enter Quantities : ";
    cin>>qtys;

    int ans = calculate(price,qtys);

    cout<<"\n Total bill Amount = "<<ans;

    return 0;
}
