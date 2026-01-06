#include <iostream>
using namespace std;
class Account{
      private:
              int acc_number;
              string name;
      public:
             static float roi;
             void setValues(int acc_number,string name){
              this->acc_number = acc_number;
              this->name = name;
             }
             void getValues(){
              cout<<"The account number is"<<acc_number<<endl;
              cout<<"The name is "<<name<<endl;
             }
};
 float Account :: roi = 5;
int main(){
  Account obj;
  obj.setValues(101,"hdfc");
  obj.getValues();
  return 0;

}