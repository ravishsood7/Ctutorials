#include <iostream>
using namespace std;
class Constructor{
   public:
          string name;
          int age;
          float grade;
          
          Constructor(){
            name = "default";
            age = 0;
            grade = 0.0;
          }
          Constructor(string n): name(n){age=0,grade=5.5;}
          Constructor(string n, int a): name(n),age(a){grade=5.5;}
          void display(){
            cout<<name<<endl;
            cout<<age<<endl;
            cout<<grade<<endl;
          }
};


int main(){
  Constructor c1;
  Constructor c2("Ram");
  Constructor c3("Ram",10);
  
  c1.display();
  c2.display();
  c3.display();

  return 0;
}