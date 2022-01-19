/* WAP to input an array of 10 elements and display addition of all elements. Also Display even 
and odd numbers from it */

#include<iostream>

using namespace std;

  int addarray(int arr[])
  {
      int sum=0;
      for(int i=0;i<10;i++)
      {
          sum = sum + arr[i];
      }
      return sum;
  }

  int evennumbers(int arr[])
  {
      for(int i=0;i<10;i++)
      {
          if(arr[i]%2==0)
            cout<<" "<<arr[i];
      }
  }

  int oddnumbers(int arr[])
  {
      for(int i=0;i<10;i++)
      {
          if(arr[i]%2==1)
            cout<<" "<<arr[i];
      }

  }

int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};

    cout<<"\n Given Array : ";
    for(int i=0;i<10;i++)
    {
       cout<<" "<<arr[i];
    }

   cout<<"\n Addition of given array : ";
   int ans =  addarray(arr);
   cout<<" "<<ans;

   cout<<"\n Even numbers from arry : ";
   evennumbers(arr);

   cout<<"\n Odd numbers from array : ";
   oddnumbers(arr);


    return 0;
}