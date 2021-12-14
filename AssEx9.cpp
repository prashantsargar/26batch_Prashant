//WAP to display ASCII value of any character. 

#include<iostream>

using namespace std;

  findASCIIvalue(char ch)
  {
      int num = int(ch);
      return num;
  }
  

int main()
{
    char ch;

    cout<<"\n Enter any character : ";
    cin>>ch;

    int num = findASCIIvalue(ch);

    cout<<"\n ASCII value of given charactetr = "<<num;
    return 0;
}