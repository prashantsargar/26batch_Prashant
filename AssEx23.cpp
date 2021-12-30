/* WAP to accept the value of a from class Demo1 and value of b from class Demo2. The variables a and b 
are private. Exchange/swap the two values and display the result. [Use friend function] */

#include<iostream>

using namespace std;

  class Demo1
  {
     private:
     int a;

     public:

     void addvalue(int a)
     {
         this->a = a;
     }

     void display()
     {
         cout<<"\n a = "<<a;
     }

     friend int swapnumbers(int a);
  };

  class Demo2
  {
      private:
      int b;
      
      public:

      void addvalue(int b)
     {
         this->b = b;
     }

     void display()
     {
         cout<<"\n b = "<<b;
     }

     friend int  swapnumbers();
  };

int swapnumbers(int &x,int &y);

int main()
{
    Demo1 d1;
    int a=10;
    int b=20;
    
    d1.addvalue(a);
    d1.display();

    Demo2 d2;

    d2.addvalue(b);
    d2.display();

    swapnumbers(a,b);

    cout<<"\n a = "<<a;
    cout<<"\n b = "<<b;

    return 0;
}

  int swapnumbers(int &x,int &y)
  {
      int temp;
      temp=x;
      x=y;
      y=temp;

    
  }