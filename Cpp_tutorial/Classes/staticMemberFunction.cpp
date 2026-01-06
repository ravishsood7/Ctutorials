// friend member fucntion

#include <iostream>
using namespace std;

class Student{
  private:
         string name;
         int age;
         int marks;
  public:
         Student(string n, int a, int m): name(n),age(a),marks(m){}

         friend void showDetails(Student &s);
};

void showDetails(Student &s){
 cout<< "Student name "<<s.name<<endl;
 cout<< "Student age "<<s.age<<endl;
 cout<< "Student marks "<<s.marks<<endl;
}

int main(){
  Student stu("Ram ",10,50);
  showDetails(stu);
  return 0;
}