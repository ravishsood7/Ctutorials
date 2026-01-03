#include <iostream>
using namespace std;

class Dice{
  public:
    double L;
    double B;
    double H;

    double getVolume(void);
    void setL(double length);
    void setB(double breadth);
    void setH(double Height);
};

double Dice::getVolume(void){
  return L * B * H;
}

void Dice::setB(double breadth){
   B= breadth;
}
void Dice::setL(double length){
   L = length;
}
void Dice::setH(double height){
   H = height;
}

int main(){
  Dice d1;
  Dice d2;
  double volume = 0.0;

  d1.setL(10);
  d1.setB(5);
  d1.setH(2);

  d2.setL(10);
  d2.setB(5);
  d2.setH(2);

  volume = d1.getVolume();
  cout<<"Volume 1 "<<volume;
  
  volume = d2.getVolume();
  cout<<"Volume 2 "<<volume;

  return 0;
}