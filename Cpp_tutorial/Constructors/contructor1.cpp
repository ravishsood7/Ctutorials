#include <iostream>
using namespace std;
class Student{
  public:
        string name;
        int age;
        char Grade;  
        Student(){
            name = "Ram";
            age = 10;
            Grade ='A';
          }
};

int main(){
  Student std;
  cout<<std.name<<endl;
  cout<<std.age<<endl;
  cout<<std.Grade<<endl;
  return 0;
}