#include <iostream>
#include <vector>

using namespace std;

int main(){
 vector <char> v = {'r','a','v','i','s','h'};

 //Accessing and printing values
 cout<<"The accessing value at 4 is"<<v[4]<<endl;
 cout<<"The accessing value at 3"<<v.at(2)<<endl;

 v[4] = 'm';
 v.at(2) = 'f';
 
 cout << v[4]<<endl;
 cout<< v.at(2)<<endl;

 return 0;

}