#include <iostream>
using namespace std;

class Copy_const{
 public:
       int d;
       Copy_const(){
        d = 0;
       }

       Copy_const(const Copy_const &s){
        d = s.d;
       }
};

int main(){
  Copy_const obj1;
  obj1.d = 10;
  cout<<obj1.d<<endl;
   Copy_const obj2(obj1);
   cout<<obj2.d;
  return 0;
}