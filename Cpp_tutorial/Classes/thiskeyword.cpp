#include <iostream>
using namespace std;
class Student {
  private:
         string stud_name;
         int stud_rollNo;
         int marks;
  public:
        void setValues(int stud_rollNo, string stud_name, int marks){
            this->stud_name = stud_name;
            this->stud_rollNo = stud_rollNo;
            this->marks = marks; 
        }
        void getValues(){
            cout<<"The marks of student-> "<<stud_name<<" with roll number "<<stud_rollNo<<" is "<<marks;
        }
};

int main(){
  Student std;
  std.setValues(101,"Ram",100);
  std.getValues();
  return 0;
}