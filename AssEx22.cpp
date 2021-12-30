/* WAP to create a class ARRAY with member function getarray() which accepts the array elements. Define 
2 different objects of that class ARRAY as a1 and a2.Get array values in object a1 and in object a2.Define 
a function calculate() which accepts the objects as arguments and performs addition of array from 
object a1 and a2. */

#include<iostream>

using namespace std;

 class ARRAY
 {
     public:
     int arr[3];
    

     void getarry(int arr[])
     {
        for(int i=0;i<3;i++)
        {
            this->arr[i]=arr[i];
        }
     }

     void display()
     {
         
       for(int i=0;i<3;i++)
        {
           cout<<" "<<this->arr[i]; 
        }
     }

      


 };

void calculate(ARRAY a1,ARRAY a2);
int main()
{ 
    int arr1[3]={1,2,3};
    int arr2[3]={4,5,6};
    ARRAY a1,a2;

    a1.getarry(arr1);
    a2.getarry(arr2);
    
    cout<<"\n First Array : ";
    a1.display();
    cout<<"\n Second Array : ";
    a2.display();
   

    calculate(a1,a2);

    return 0;
}

void calculate(ARRAY a1,ARRAY a2)
   {
       int arr1[3]={1,2,3};
        int arr2[3]={4,5,6};
       int sum=0;
       cout<<"\n Addition Of two arrays : ";
         for(int i=0;i<3;i++)
         {
             sum = arr1[i] + arr2[i];
             cout<<" "<<sum;
         }
   }

  