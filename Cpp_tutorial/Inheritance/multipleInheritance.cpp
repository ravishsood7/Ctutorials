#include <iostream>
using namespace std;
class A {
    public:
           void dispA(){
            cout<<"Display Function of Class A"<<endl;
           }
};
class B {
   public:
          void dispB(){
            cout<<"Display Function Class B"<<endl;
          }
};
class C : public A, public B{
     public:
           void dispC(){
            cout<<"Display Function of Class C"<<endl;
           }
};

int main(){
  C obj;
  obj.dispA();
  obj.dispB();
  obj.dispC();
  return 0;
}