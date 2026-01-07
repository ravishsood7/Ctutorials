#include <iostream>
using namespace std;
class Student{
  public: 
     string name;
     int age;
     int grade;

     Student(string name, int age, int grade){
         this->name = name;
         this->age = age;
         this->grade =grade;
     }
     
     void display(){
      cout<<"The name of the student is"<< name<<endl;
      cout<<"The age of the student is"<<age<<endl;
      cout<<"The grade of the student is"<<grade<<endl;
     }
};

int main(){
  Student ram("Ram",10,10);
  ram.display();

  Student two("Shyam",15,20);
  two.display();
  return 0;
}