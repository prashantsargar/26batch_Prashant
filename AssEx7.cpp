//WAP to display the array values in Ascending order.

#include<iostream>

using namespace std;

  int sortByarray(int arr[])
  {
      for(int si=0;si<5;si++)
      {
          for(int ci=si+1;ci<5;ci++)
          {
              if(arr[si]>arr[ci])
              {
                  int temp = arr[si];
                  arr[si] = arr[ci];
                  arr[ci] = temp;

              }
              
          }
      }
      return arr[5];
  }

int main()
{
    int arr[5]={7,4,5,3,2};
    cout<<"\n Given Array : ";
    for(int i=0;i<5;i++)
    {
        cout<<" "<<arr[i];
    }

    cout<<"\n After Sorting : ";
    int ans[5] = sortByarray(arr);
    for(int i=0;i<=5;i++)
    {
       cout<<"\n"<<ans[i];
    }
       
    return 0;
}