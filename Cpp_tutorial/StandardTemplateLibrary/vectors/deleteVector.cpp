#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  vector <char> v = { 'r','a','v','i','s','h'};
  v.pop_back();

  for (int i =0;i<v.size();i++){
    cout<<v[i];
  } 
  auto  it = find(v.begin(),v.end(),'v');
  if( it != v.end()){
    v.erase(it);
  }
   cout<<"\n";
   for (int i =0;i<v.size();i++){
    cout<<v[i];
  } 
  return 0;
}