#include <iostream>
using namespace std;
class Shape{
  public:
     virtual void draw(){
      cout <<"Drawing ..."<<endl;
     }
};
class Rectangle: public Shape{
  public:
        void draw() override{
         cout<<"Drawing Rectangle ..."<<endl;
        }
};
class Triangle: public Shape{
  public:
        void draw() override{
           cout<<"Drawing Triangle...";
        }
};

int main(){
  
  return 0;
}