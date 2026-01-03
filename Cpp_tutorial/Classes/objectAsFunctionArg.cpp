#include <iostream>
using namespace std;

class Employee{
    public:
          string emp_name;
          int emp_id;
          void setValues(int id, string name){
            emp_name = name;
            emp_id = id;
          }
          void displayDetails(){
            cout<<"Employee name is "<<emp_name<<endl;
            cout<<"Employee id is "<<emp_id;
          }
};
//Function that takes Employee Object as parameter
void showEmployee(Employee emp)
{
  cout<<"Inside the class"<<endl;
  cout<<"Employee Name:"<<emp.emp_name<<endl;
  cout<<"Employee Id:"<<emp.emp_id<<endl;
}


int main(){
  Employee emp;
  emp.setValues(101,"Ram");
  emp.displayDetails();
  showEmployee(emp);

  return 0;
}