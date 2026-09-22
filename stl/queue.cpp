#include <bits/stdc++.h>
#include <iostream>

using namespace std;
class Solution{
  public:
    void explainQueue(){

      queue<int> q;
      q.push(45);          
      q.push(22);
      q.push(31);
      q.push(93);

      cout << q.front() <<endl;

      q.pop();

      cout << q.front()<<endl;

      q.back() +=2;

      cout << q.back()<<endl;
    }
};

int main(){
  Solution sol;
  sol.explainQueue();

  return 0;
}
