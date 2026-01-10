#include <iostream>
#include <vector>
using namespace std;
int main(){
  vector<int> numbers; // empty vector
  vector<int> size(5); // vector with size of 5 elements
  vector<int> values(3,10); // vector with size 3 and each initialized with 10
  vector<int> primes = {2,3,4,5}; // vector initialized with some values
  cout<<"VECTOR CREATED: "<<endl;
  return 0;
}