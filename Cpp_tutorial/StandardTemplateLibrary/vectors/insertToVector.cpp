#include<iostream>
#include<vector>
using namespace std;

int main(){
  vector <char> v = {'H','E','L','L'};
  v.push_back('O');
  v.insert(v.begin()+2,'j');

  for(int i = 0;i<v.size();i++){
    cout<<v[i]<<" ";
  }
  return 0;
}