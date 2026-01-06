#include <iostream>
using namespace std;
class Student{
 public:
        void Display(){
          cout<<"This pointer holds: "<< this <<endl;
        }
};

int main(){
  Student std;
  std.Display();
  return 0;
}