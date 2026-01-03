#include <iostream>
using namespace std;

class Note{
  static int num;
  int b =5;
  public:
   static int func(){
    
     return num;
   }
};

int Note:: num = 5;

int main(){
  cout<<"Value of num is"<<Note::func()<<endl;
}