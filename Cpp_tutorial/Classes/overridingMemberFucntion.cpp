#include <iostream>
using namespace std;
class Shape{
  public:
         virtual void draw(){
           cout<<"Drawing the shape"<<endl;
         }
};

class Circle : public Shape{
  public:
        void draw() override{
           cout<<"Drawing the circle"<<endl;           
        }
};

class Rectange: public Shape{
  public:
        void draw() override{
          cout<<"Drawing the rectangle"<<endl;
        }
};

int main(){
  Shape *ptr = new Circle();
  ptr -> draw();

  ptr = new Rectange();
  ptr -> draw();

  Circle obj1;
  obj1.draw();

  Rectange obj2;
  obj2.draw();
  return 0;
}