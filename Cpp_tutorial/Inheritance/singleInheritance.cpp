#include <iostream>
using namespace std;
class Person{
   public:
         string name;
         int age;
};
class Student : public Person{
   public:
         float marks;
         void display(){
          cout<<name<<" is "<<age <<" years old and has scored "<<marks<<" marks."<<endl;
         }
};
int main(){
   Student std;
   std.name = "Ram";
   std.age = 10;
   std.marks = 10.1;

   std.display();
  return 0;
}