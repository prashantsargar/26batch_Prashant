//WAP to input two integer numbers and display their addition.

#include<iostream>

using namespace std;

  int addnumbers(int num1,int num2)
  {
      return ( num1 + num2 );
  }

int main()
{
    int num1,num2;

    cout<<"\n Enter any two numbers : ";
    cin>>num1>>num2;
    
    cout<<"\n Addition of two given numbers : ";
    int ans = addnumbers(num1,num2);
    cout<<" "<<ans;
    return 0;
}