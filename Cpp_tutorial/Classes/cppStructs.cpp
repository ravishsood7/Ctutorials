#include <iostream>
using namespace std;

struct Student{
    string stud_name;
    int age;
    float grade;
};

struct Marks{
   int a;
   int b;

   int multiply(){
     return a * b;
   }
};

struct Point{
  int x;
  int y;
};

struct Rectangle{
    int length;
    int breadth;
  };

int main(){
  Student std = {"Ravish",10,10.0};
  cout<<"The name of student is: "<<std.stud_name<<endl;
  cout<<"The age of student is: "<<std.age<<endl;
  cout<<"The grade of student is:"<<std.grade<<endl;
  
  Marks m = {10,5};
  int result = m.multiply();
  cout<<m.a<<" "<<m.b<<" = " <<result<<endl;
  
  Point arr[2] = {{5,6},{9,12}};
  cout<<arr[0].x<<" "<<arr[0].y<<endl;
  cout<<arr->x<<endl;
  cout<<arr->y<<endl;
  cout<<arr[1].x<<" "<<arr[1].y<<endl;
  
  
  Rectangle rt = { 10,20};
  Rectangle *ptr = &rt;
  cout<< ptr->length<<endl;
  cout<< ptr->breadth<<endl;


  return 0;
}