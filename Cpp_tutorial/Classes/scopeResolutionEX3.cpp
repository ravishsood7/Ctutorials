#include <iostream>
using namespace std;

class Parent{
 static int n1;
 public:
 static int n2;

 void fun1(int n1){
  cout<<"The value of the static integer N1 is :"<<Parent::n1;
  cout<<"The value of the local variable n1 is:"<<n1;
 } 

};

int Parent::n1 = 5;
int Parent::n2 = 10;

int main(){
  Parent b;
  int n1 = 15;
  b.fun1(n1);
  cout<<"The value of the base n2"<< Parent::n2;
  return 0;
}