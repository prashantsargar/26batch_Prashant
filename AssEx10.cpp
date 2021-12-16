//WAP to create a function searcharray() which finds the array value is present or not.

#include<iostream>

using namespace std;

   int findByarray(int arr[],int num)
   {
       int cnt=0;
      for(int i=0;i<5;i++)
      {
          if(num==arr[i])
          cnt++;
      }
      return cnt;
   }

int main()
{
    int arr[5] = {5,7,2,8,9};
    cout<<"\n Given array : ";
    for(int i=0;i<5;i++)
    {
        cout<<" "<<arr[i];
    }
    
    int num;
    cout<<"\n"<<"Enter number to Search : ";
    cin>>num;

    int cnt = findByarray(arr,num);
    if(cnt==1)
    {
        cout<<"\n"<<" Number is present in array .";
    }
    else
    {
        cout<<"\n"<<" Number is not present in array .";
    }
    return 0;
}