/* WAP to create a class ARRAY with member function getarray() which accepts the array elements as user 
defined size and create another function geteven(), getodd() to display the all even and odd values from 
the array.[Use scope resolution operator] */

#include<iostream>

using namespace std;

 class ARRAY
 {
     public:
     int arr[5];

    int geteven(int arr[]);
    int getodd(int arr[]);
 };

 int ARRAY::geteven(int arr[])
     {
         cout<<"\n Even numbers are : ";
         for(int i=0;i<5;i++)
         {
             if(arr[i]%2==0)
             {
                 cout<<" "<<arr[i];
             }
         }
     }

 int ARRAY::getodd(int arr[])
 {
     cout<<"\n Odd numbers are : ";
         for(int i=0;i<5;i++)
         {
             if(arr[i]%2==1)
             {
                 cout<<" "<<arr[i];
             }
         }
     }

int main()
{
    ARRAY a[5];

    int arr[5]={2,3,4,5,6};

    cout<<"\n Given Array : ";
    for(int i=0;i<5;i++)
      {
          cout<<" "<<arr[i];
      }

    a[5].geteven(arr);
    a[5].getodd(arr);
    
    return 0;
}

   