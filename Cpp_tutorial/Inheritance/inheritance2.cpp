#include <iostream>
using namespace std;
class A{
   public:
         int x;
};

class B : public A{
    public:
          int y;
};


int main(){
  B obj;
  obj.x = 10;
  obj.y = 15;

  cout<<"Parent class x value"<<obj.x<<endl;
  cout<<"Child class y value"<<obj.y<<endl;
  return 0;
}