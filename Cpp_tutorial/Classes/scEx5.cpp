#include <iostream>
using namespace std;
class ABC{
 public:
  void test(){
    cout<<"Parent Class"<<endl;
  }
};
class Child:public ABC{
 public :
  void test(){
    ABC :: test();
    cout<<"child class"<<endl;
  }
};

int main(){
  Child obj;
  obj.test();
  return 0;
}