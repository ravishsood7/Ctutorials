#include <iostream>
using namespace std;

class Employee {

//Data members
  public:
    string emp_name;
    int age;

//Member Functions
void displayInfo(){
  cout<<"Enter the Name of Employee: "<<emp_name<<endl;
  cout<<" Enter the Age of Employee: "<<age<<endl;
}
};

int main(){
  Employee e1;
  e1.emp_name = "Ravish";
  e1.age = 25;
  e1.displayInfo();
  return 0 ;
}
