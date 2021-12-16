//WAP to display the minimum value among the array values.

#include<iostream>

using namespace std;

 int minarray(int arr[])
 {
     int min=arr[0];
     for(int i=0;i<5;i++)
     {
         if(min>arr[i])
         min = arr[i];
     }
     return min;
 }

int main()
{
    int arr[5] = {7,3,5,9,1};
    cout<<"\n"<<"Given array : ";
    for(int i=0;i<5;i++)
    {
        cout<<"\t"<<arr[i];
    }

    cout<<"\n Minimum array value = "; 
    int ans = minarray(arr);
    cout<<"\t"<<ans;
    return 0;
}