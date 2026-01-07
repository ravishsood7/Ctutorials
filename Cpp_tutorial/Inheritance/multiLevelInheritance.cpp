#include <iostream>
using namespace std;

class Appliance{
  public:
        void display1(){
          cout<<"The Appliances are of many types"<<endl;
        }
};
class WashineMachine : public Appliance{
  public:
        void display2(){
           cout<<"The Washing machine cost 1000 rupees"<<endl;
        }
};
class SmartWashingMachine : public WashineMachine{
    public:
          void display3(){
             cout<<"The Smart Washing Machine are expensive than normal washing machine"<<endl;
          }
}; 
int main(){
  SmartWashingMachine obj;
  obj.display1();
  obj.display2();
  obj.display3();
  return 0;
}