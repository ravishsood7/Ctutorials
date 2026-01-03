//Program to access static member fucntion using the scope resolution operator
#include <iostream>
using namespace std;
class Abc{
 public:
   static int func(){
    cout<<"STATIC FUCNTION"<<endl;
    return 0; 
  }
};

int main(){
  Abc ::func();
  return 0;
}