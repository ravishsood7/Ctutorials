
// Shallow copy using the default constructors
#include<iostream>
using namespace std;
class Rectangle{
     public:
           int length;
           int breadth;

           Rectangle(int length, int breadth){
             this->length = length;
             this->breadth = breadth;
           }
           void display(){
            cout<<"The area of Rectangle is : "<< length * breadth<<endl;
           }
};

int main(){
  Rectangle rt(10,20);

  Rectangle rt2 = rt;

  rt2.display();
  return 0;
}