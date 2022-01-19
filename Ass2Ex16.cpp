/* Write a Menu Driven Program to edit Bank Account.
Menu
1.Open Account 2. View Account 3. deposit Amount 4. Withdraw Amount 5. View Balance 6. Search Account 7. Exit */

#include<iostream>
#include<string.h>

using namespace std;

   char actname[20];
   char acttype[20];
   int actnum;


 void menu()
 {
     cout<<"\n Press 1 to open account";
     cout<<"\n Press 2 to view account";
     cout<<"\n Press 3 to deposit amount";
     cout<<"\n Press 4 to withdraw amount";
     cout<<"\n Press 5 to view account balance";
     cout<<"\n Press 6 to search account";
     cout<<"\n Press 7 to exit";
 }

  int account(int choice)
  {
      switch (choice)
      {
      case 1:
          {
              std::cout<<"\n Enter account Holder Name : ";
              cin>>actname;
              std::cout<<"\n Enter account Type : ";
              cin>>acttype;
              cout<<"\n Enter account number : ";
              cin>>actnum;
              cout<<"\n Your account opened successfully...";
          }
          break;
      case 2:
          {
              cout<<"Account holder name : Prashant Sargar";
              cout<<"\n Account type : Saving account";
              cout<<"\n Account Number : SBI00014";
          }
          break;
      case 3:
          {
              double dipositamt;
              cout<<"\n Enter amount to diposit: ";
              cin>>dipositamt;
              cout<<"\n Amount diposited successfully...";
          }
          break;
      case 4:
          {
              double withdrawamt;
              cout<<"\n Enter amount to withdraw : ";
              cin>>withdrawamt;
              cout<<"\n Amount withdrawal done successfully...";
          }
          break;
      case 5:
          {
              double balance=50000;
              cout<<"\n Your account balance : "<<balance;
          }
          break;
      case 6:
          {
              char* actname[5]={"Prashant","Vynkatesh","Shubham","Shardul","Pranay"};
              char searchactname[20];
              cout<<"\n Enter account name to search : ";
              cin>>searchactname;
              for(int i=0;i<5;i++)
              {
                  if(strcmp(searchactname,actname[i])==0)
                    return 1;
                  else
                   return 0;
              }
              
          }
          break;
      case 7:
      {
          cout<<"\n Exit...";
      }
      
      default:
      {
          cout<<"\n Invalid Input...";
      }
          break;
      }
  }

int main()
{
    int choice;

    menu();

    cout<<"\n Enter your choice : ";
    cin>>choice;

    int ans = account(choice);
    if(ans==1)
    {
        cout<<"\n Account is exist...";
    }
    else if(ans==0)
    {
        cout<<"\n Account is dose not exist...";
    }

    return 0;
}
