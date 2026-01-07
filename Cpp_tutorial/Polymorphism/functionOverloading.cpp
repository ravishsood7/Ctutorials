#include <iostream>
using namespace std;
class A{
  public:
        void multiply(int a, int b)
        {
            cout<<(a * b);
        }

        void multiply(float a, float b)
        {
            cout<< (a * b);
        }
};


int main(){
  A obj;
  obj.multiply(10,20);
  obj.multiply(10.5f,5.2f);
  return 0;
}