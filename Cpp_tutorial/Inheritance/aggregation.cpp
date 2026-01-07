#include <iostream>
using namespace std;
class Test{
  public:
        int hno;
        string city,state;
        Test(int hno, string city, string state){
           this->hno = hno;
           this->city = city;
           this->state = state;
        }
};
class Address{
  private:
         Test *addr;
  public:
        string name;
        Address(string name, Test* addr)
        {
          this->addr = addr;
          this->name = name;
        }
        void display(){
          cout<<"Name : "<< name <<endl; 
          cout<<"Hno : "<< addr -> hno<<endl;
          cout<<"city : "<< addr -> city<<endl;
          cout<<"state : "<< addr -> state<<endl;
        }
};
int main(){
  Test obj1 = Test(45,"Los Angels","USA");
  Test obj2 = Test(65,"London","UK");

  Address a1 = Address("Joy",&obj1);
  Address a2 = Address("Ram",&obj2);
  return 0;
}