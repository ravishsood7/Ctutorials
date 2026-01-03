#include <iostream>
using namespace std;

// Public Access Specifier
class Book_Store
{
   public:
      string booktitle;
      void showTitle(){
        cout<<"The Title of Book is :"<< booktitle<<endl;
      }
};

// Private Access Specifier
class BankAccount
{
  private:
    double balance;
  public:
    string account_holder_name;
    void setBalance(double amount){
      balance = amount;
      cout<<"The Account Holder Name is: "<<account_holder_name<<endl;
      cout<<"The balance Amount is: "<<balance<<endl;
        }
};

//Protected Access Specifiers
class Employee{
  protected:
     double salary;
  public:
     string name;
     void setSalary(double amount){
        salary = amount;
     }
};

class Manager : public Employee{
 public:
  void displayInfo(){
    cout<<"The name of the manager is :"<< name<<endl;
    cout<<"The salary of the manager is : "<< salary;
  }
};

int main(){
  cout<< "Public Access Specifier"<<endl;
  //Public Access Specifier Example
  Book_Store bs;
  bs.booktitle = "Let Us C++";
  bs.showTitle();

  cout<<"Private Access Specifier Example"<<endl;
  //Private Access Specifier Example
  BankAccount ba;
  ba.account_holder_name = "Ravish Sood";
  ba.setBalance(500000.00);

  cout<<"Protected Access Specifier Example"<<endl;
  //Protected Access Specifier Example
  Manager mg;
  mg.name="Ram";
  mg.setSalary(20000.25);
  mg.displayInfo();
  return 0;
}
