/* WAP to create two classes as MktDept and ProdDept. Input name and salary of an Employee.
Compare both employees and display which employee earns more. [Note : Variables Must be
Private] */

#include<iostream>
#include<string.h>
#include<iomanip>

using namespace std;

class MnfDept
{
    private:
    char name[20];
    double salary;
    
    public:
    void addInfo(char name[],double salary)
    {
      strcpy(this->name,name);
      this->salary=salary;
    }

    void getInfo()
    {
        cout<<"\n Name of Employee : "<<name
        <<setw(30)<<" Salary : "<<salary;
    }

    double getSalary()
  {
      return salary;
  }

};


class ProdDept
{
    private:
    char name[20];
    double salary;

    public:
    void addInfo(char name[],double salary)
    {
      strcpy(this->name,name);
      this->salary=salary;
    }

    void getInfo()
    {
        cout<<"\n Name of Employee : "<<name
        <<setw(30)<<" Salary : "<<salary;
    }

     double getSalary()
  {
      return salary;
  }

};

 int compareBySalary(MnfDept m1, ProdDept p1)
  {
      cout<<"\n Employee having more salary : ";
      if(m1.getSalary()>p1.getSalary())
      m1.getInfo();
      else
      p1.getInfo();
  }


int main()
{
    MnfDept m1;
    ProdDept p1;
    
    m1.addInfo("Prashant",50000.0f);
    m1.getInfo();
    
    p1.addInfo("Vyankatesh",60000.0f);
    p1.getInfo();

    compareBySalary(m1,p1);
    

    return 0;
}
   
  
