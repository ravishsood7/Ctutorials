#include <iostream>
using namespace std;

class Car{
 private:
  int car_id;
  char car_name[20];
  int marks;
 
 public:
  static int static_member;

 Car(){
  static_member++;
 }
 void inp(){
  cout<< " Enter the Id of the Car:"<<endl;
  cin>> car_id;

  cout<<"Enter the name of the Car:"<<endl;
  cin>>car_name;

  cout<<"Enter number of marks"<<endl;
  cin>>marks;
 }

 void disp(){
  cout<< "Id of car is: "<<car_id<<endl;
  cout<< "Name of the car is"<<car_name<<endl;
  cout<<" Marks of the car is "<<marks<<endl;
 }
};
int Car::static_member = 0;

int main(){
  Car obj;
  obj.inp();
  obj.disp();

  Car obj2;
  obj2.inp();
  obj2.disp();

  cout<< "Number of objects of car is"<< Car::static_member;
  return 0;
}