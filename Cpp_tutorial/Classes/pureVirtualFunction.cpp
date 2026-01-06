#include <iostream>
using namespace std;
class Shape{
    public:
           virtual double calculateArea() = 0;
           virtual ~Shape(){}
};

class Circle : public Shape{
  private:
          double radius = 10; 
  public:
         double calculateArea() override{
            return 3.14 * radius * radius;
         }
};

class Rectange : public Shape {
   private:
           double length = 10;
           double breadth = 65;
   public:
         double calculateArea(){
              return length * breadth;
         }
};


int main(){
  Circle c;
  Rectange r;
  cout<<"Area of circle is : "<<c.calculateArea()<<endl;
  cout<<"Area of Rectange is : "<<r.calculateArea()<<endl;
  return 0;
}