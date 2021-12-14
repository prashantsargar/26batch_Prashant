//WAP to calculate and print factorial of first 10 numbers.

#include<iostream>

using namespace std;

   int factorial(int no)
   {
       int fact=1;
       for(int i=no;i>=1;i--)
       {
           fact = fact*i;
        }
         return fact;
    }

int main()
{
   
    cout<<"\n factorial of first 10 numbers : ";
    
    for(int i=1;i<=10;i++)
    {
         int ans = factorial(i);
          cout<<"\n"<<ans;
    }
    
    
}