//WAP Interchanging 2nd and 3rd digit from 5 digit integer number.

#include<iostream>

using namespace std;

 int interchange(int num)
 {
     int arr[5];
     int rem=0;
     for(int i=0;i<5;i++)
    {
        rem = num%10;
        arr[i] = rem;
        num = num/10;
    }//54321
int temp=arr[2];
    arr[2]=arr[3];
    arr[3]=temp;

 for(int i=4;i>=0;i--)
 {
     cout<<arr[i];
 }

 }

int main()
{
    int num;

    cout<<"\n Enter any 5 digit number : ";
    cin>>num;
    
    cout<<"\n After interchanging 2nd and 3rd digit of number: ";
    interchange(num);

    return 0;
}

