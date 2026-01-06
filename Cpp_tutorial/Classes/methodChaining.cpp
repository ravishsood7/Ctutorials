#include <iostream>
using namespace std;
class Chain{
 private:
        int value;
 public:
        Chain& setValue(int v){
          this ->value = v;
          return *this;
        }

        void display(){
          cout<<"Value: "<<value<<endl;
        }
};
int main (){
  Chain obj;
  obj.setValue(10).display();
  return 0;
}