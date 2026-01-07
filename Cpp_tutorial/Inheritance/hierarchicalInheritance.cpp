#include<iostream>
using namespace std;
class A{
   public:
         int x = 10;
         int y = 15;
};
class B: public A{
    public:
         void add(){
          cout<<x <<" + "<<y <<" = "<<(x+y)<<endl;
         }
};
class C: public A{
    public:
          void multi(){
            cout<<x<<" * "<<y<<" = "<<(x*y)<<endl;
          }
};
int main(){
  B objb;
  C objc;

  objb.add();
  objc.multi();
  return 0;
}