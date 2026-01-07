#include <iostream>
using namespace std;

class A{
  public : 
         A(){
          cout<<"A class constructor"<<endl;
         }
};
class B: public A{
    public:   
    B(){
          cout<<"B class constructor"<<endl;
        }
};
class C: public B{
       public:
             C(){
              cout<<"C class constructor"<<endl;
             }
};
int main(){
  C obj;
  return 0;
}