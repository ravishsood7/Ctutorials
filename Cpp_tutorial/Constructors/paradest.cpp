#include <iostream>
using namespace std;
class Student{
  public:
     int x;
     Student(int x){
      this->x = x;
     }
     ~Student(){
      cout<<"Destructor call for value "<<x<<endl; 
     }
};
int main(){
  Student ob(10);
  Student ob2(20);
   cout<<ob.x<<endl;
   cout<<ob2.x<<endl;
  
  return 0;
}