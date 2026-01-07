#include <iostream>
using namespace std;

class Student{
  public:
        int x;
        Student(int a): x(a){} // member initialization list  
};

int main(){
  Student obj(10);
  cout<<obj.x;
  return 0;
}