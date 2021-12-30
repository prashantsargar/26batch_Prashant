//WAP to swap the two numbers without using temperory variable.

#include<iostream>

using namespace std;

  int swapByNumbers(int num1,int num2)
  {
      num1=num1+num2;
      num2=num1-num2;
      num1=num1-num2;

      cout<<"\n After Swapping : "<<num1<<" "<<num2;
  }

int main()
{
    int num1,num2;

    cout<<"\n Enter any two numbers : ";
    cin>>num1>>num2; 

    cout<<"\n Numbers Before Swapping : "<<num1<<" "<<num2;

    swapByNumbers(num1,num2);

    return 0;
}