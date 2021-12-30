//WAP to perform addition,subtraction,multiplication and division using pointer variable.

#include<iostream>

using namespace std;

 int additionOfNum(int a,int b)
 {
     int sum = a + b;
     return sum;
 }

 int substractionOfNum(int p,int q)
 {
     int diff = p - q;
     return diff;
 }

 int multiplicationOfNum(int y,int z)
 {
     int mult = y*z;
     return mult;
 }

 float divisionOfNum(float c,float d)
 {
     float div = c/d;
     return div;
 }
 

int main()
{
    int num1,num2,*p,*q,ans;

    cout<<"\n Enter any two numbers : ";
    cin>>num1;
    cin>>num2;

    p=&num1;
    q=&num2;

    cout<<"\n Input from users are : ";
    cout<<*p;
    cout<<"  "<<*q;

    int sum = additionOfNum(*p,*q);
    cout<<"\n Addition of two numbers = "<<sum;

    int diff = substractionOfNum(*p,*q);
    cout<<"\n Substraction of two numbers = "<<diff;

    int mult = multiplicationOfNum(*p,*q);
    cout<<"\n Multiplicatin of two given numbers = "<<mult;

    float div = divisionOfNum(*p,*q);
    cout<<"\n Division of two given numbers = "<<div;

    return 0;
}