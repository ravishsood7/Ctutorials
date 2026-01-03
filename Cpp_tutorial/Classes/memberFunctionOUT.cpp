//Member function outside the class
#include <iostream>
using namespace std;

class Car{
    private:
        string model_name;
        int model_price;
    public:
        void setValues(string model, int price);
        void getValues();

};
void Car::setValues(string model, int price){
  model_name = model;
  model_price = price;
}

void Car :: getValues(){
  cout<< "The price of car :->"<<model_name <<" is -> "<<model_price<<endl;
}

int main(){
  Car cobj;
  cobj.setValues("Mercedes",100000);
  cobj.getValues();
  return 0;
}