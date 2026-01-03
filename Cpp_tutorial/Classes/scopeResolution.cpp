// ACCESS HIDDEN VALUE USING SCOPE RESOLUTION OPERATOR

#include <iostream>
using namespace std;

int gl = 100;

int main(){
  int gl = 50;
  cout<<"The local variable is "<<gl<<endl;
  cout<<"The global variable is "<<::gl<<endl;
  return 0;
}