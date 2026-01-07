#include <iostream>
using namespace std;
class Input{
  public:
        int num1;
        int num2;
        void getInput(){

            cout<<"Enter the first number: "<<num1<<endl;
            cin>>num1;

            cout<<"Enter the Second number: "<<num2<<endl;
            cin>>num2;
        }
};

class Addition: public Input{
   public:
         void sum(){
            cout<<num1<<" + "<<num2<<" = "<<(num1+num2)<<endl;
         }
};

int main(){
  Addition obj;
  obj.getInput();
  obj.sum();
  return 0;
}