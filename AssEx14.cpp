//WAP to display even and odd values from the given range.

#include<iostream>

using namespace std;

  void even(int n1,int n2)
  {
       for(int i=n1;i<=n2;i++)
    {
        if(i%2==0)
        {
            cout<<"\n "<<i;
        }
    }
  }

  void odd(int n1,int n2)
  {
       for(int i=n1;i<=n2;i++)
    {
        if(i%2!=0)
        {
            cout<<"\n "<<i;
        }
    }
  }

int main()
{
    int n1,n2;

    cout<<"\n Enter Values Of n1 and n2 : ";
    cin>>n1;
    cin>>n2;

    cout<<"\n Even Numbers are : ";
   even(n1,n2);

    cout<<"\n Odd Numbers are : ";
   odd(n1,n2);
}