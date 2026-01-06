#include <iostream>
using namespace std;
class Box {
     private:
            int box_length= 10;
     public:
            friend void printLength(Box);
};
void printLength(Box b){
  cout << b.box_length;
}

int main(){
  Box b;
  printLength(b);
  return 0;
}