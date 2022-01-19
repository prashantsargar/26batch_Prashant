/* WAP to input gender and age of an Employee and check whether the Employee is eligible for 
the Insurance or not in the following Conditions
 1. if Emp is male and age>=35
 2. if Emp is female and age>=25
Use Appropriate Function which accepts gender and age as arguments and returns 1 is 
conditions are satisfied otherwise returns 0. And if invalid input from the user then any non-zero
 value except 1 is returned. */

 #include<iostream>
 #include<string.h>

 using namespace std;

   int eligibility(char gender[],int age)
   {
       if(stricmp(gender,"male")==0 && age>=35 || stricmp(gender,"female")==0 && age>=25)
       return 1;
       else if(stricmp(gender,"male")==0 && age<35 || stricmp(gender,"female")==0 && age<25)
       return 0;
       else
       return -1;
     }

 int main()
 {
     char gender[20];
     int age;

     cout<<"\n Enter gender and age of Employee : ";
     cin>>gender>>age;

     int ans = eligibility(gender,age);

     if(ans==1)
     cout<<"\n Employee is eligible for insurance.";
     else if(ans==0)
     cout<<"\n Employee is not eligible for insurance..";
     else if(ans==-1)
     cout<<"\n Invalid Input...";


     
     return 0;
 }