#include <iostream>
using namespace std;
class Constructor{
   public:
    Constructor(){
      cout<<"Default Constructor invoked"<<endl;
    }
};

int main(){
  Constructor obj1;
  Constructor obj2;
  return 0;
}