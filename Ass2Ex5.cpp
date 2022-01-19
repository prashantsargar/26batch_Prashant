//WAP to interchange the integer numbers using a function [Reference Arguments]

#include<iostream>

using namespace std;

  int  swapnumbers(int &x,int &y)
  {
      int temp;
      temp=x;
      x=y;
      y=temp;
  }

int main()
{
    int num1,num2;
    
    cout<<"\n Before Swapping";
    cout<<"\n Enter any two numbers : ";
    cin>>num1>>num2;

    cout<<"\n After Swaping : ";
    swapnumbers(num1,num2);
    cout<<"\n num1 = "<<num1;
    cout<<"\n num2 = "<<num2;

    return 0;
}