#include <iostream>
using namespace std;

class Employee{
  public:
     int emp_id;
     string emp_name;
     void setEmployee(int id, string name){
       emp_id = id;
       emp_name = name;
     }
     void displayEmployee(){
      cout<<"The name of the employee is: "<<emp_name<<endl;
      cout<<"The id of the employee "<<emp_name<<" is "<<emp_id;
     }
};

int main(){
  Employee emp1;
  emp1.setEmployee(101,"Ravish Sood");
  emp1.displayEmployee();
  return 0;
}