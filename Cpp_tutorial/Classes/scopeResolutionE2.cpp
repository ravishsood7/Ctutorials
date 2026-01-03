// Define member function outside the class

#include <iostream>
using namespace std;

class Employee{
   public:
      void displayName(string name);
};

void Employee::displayName(string name){
  cout<<"The name of the employee is: "<<name;
}
int main(){
  Employee emp;
  emp.displayName("Ravish");
  return 0;
}