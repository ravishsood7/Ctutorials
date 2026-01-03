//Member function inside the class

#include <iostream>
using namespace std;

class Employee{
    public:
          int emp_id;
          string emp_name;
          int salary;
          
          void setValues(int id, string name, int sal){
            emp_id = id;
            emp_name = name;
            salary = sal;
          }

          void displayValues(){
            cout<<"The salary of employee : "<<emp_name<<" with employee id : "<<emp_id<<" is "<<salary;
          }
};

int main(){
  Employee empObj;
  empObj.setValues(101,"RAM",10000);
  empObj.displayValues();
  return 0;
}