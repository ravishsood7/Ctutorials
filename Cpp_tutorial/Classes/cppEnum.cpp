#include <iostream>
using namespace std;

enum Months{ Jan, Feb, Mar, Apr, May, June};
enum Operations{ADD, SUB};
void ops(int a, int b, Operations op){
  if(op == ADD){
    cout<<a+b<<endl;
  }
  else{
    cout<<a-b;
  }
}
int main(){
  ops(10,20,ADD);
  Months mt_name = Mar;
  cout<<mt_name<<endl;
  cout<<mt_name+1;
  return 0;
}