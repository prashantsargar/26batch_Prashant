//WAP to input two numbers and display their Arithmetical Operations.

#include<iostream>

using namespace std;

  int addnumbers(int num1,int num2)
  {
      return (num1+num2);
  }

  int subnumbers(int num1,int num2)
  {
      return (num1-num2);
  }

  int multnumbers(int num1,int num2)
  {
      return (num1*num2);
  }

  int divnumbers(int num1,int num2)
  {
      return (num1/num2);
  }

int main()
{
    int num1,num2;

    cout<<"\n Enter any two numbers : ";
    cin>>num1>>num2;

    cout<<"\n Addition Of two given numbers : ";
    int sum = addnumbers(num1,num2);
    cout<<" "<<sum;

    cout<<"\n Subtraction Of two given numbers : ";
    int sub = subnumbers(num1,num2);
    cout<<" "<<sub;

    cout<<"\n Multiplicatin Of two given numbers : ";
    int mult = multnumbers(num1,num2);
    cout<<" "<<mult;

    cout<<"\n Division Of two given numbers : ";
    int div = divnumbers(num1,num2);
    cout<<" "<<div;

    return 0;
}