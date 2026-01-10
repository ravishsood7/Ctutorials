#include <iostream>
#include <queue>

using namespace std;

int main(){
  queue <int> q;
  q.push(10);
  q.push(15);
  q.push(4);

  cout<<"The front element of the queue is: "<<q.front()<<endl;
  cout<<"The last element of the queue is: "<<q.back()<<endl;
  q.pop();


  cout<<"The front element of the queue is: "<<q.front()<<endl;

  return 0;
}