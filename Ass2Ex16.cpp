/* Write a Menu Driven Program to edit Bank Account.
Menu
1. Open
Account
2. View
Account
3. deposit
Amount
4. Withdraw
Amount
5. View
Balance
6. Search
Account 7. Exit */

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

  void account(int choice)
  {
      switch (choice)
      {
      case 1:
          {
              cout<<"\n Enter account Holder Name : ";
              cin>>actname;
              cout<<"\n Enter account Type : ";
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
              cout<<"\n Amount diposited successfully...";
          }
          break;
      case 4:
          {
              cout<<"\n Amount withdrawal done successfully...";
          }
          break;
      case 5:
          {
              cout<<"\n Your account balance = 50000";
          }
          break;
      case 6:
          {
              char searchactname[20];
              cout<<"\n Enter account name to search : ";
              cin>>searchactname;
              if(strcpy(searchactname,actname)==0)
                cout<<searchactname<<"\n Account is exist...";
              else
                cout<<searchactname<<"\n Account is not exist...";
          }
          break;
      case 7:
          {
              cout<<"\n Exit...";
          }
      
      default:
          break;
      }
  }

int main()
{
    int choice;

    menu();

    cout<<"\n Enter your choice : ";
    cin>>choice;

    account(choice);

    return 0;
}
