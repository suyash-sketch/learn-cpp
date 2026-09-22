#include <bits/stdc++.h>
#include <functional>
#include <queue>
#include <vector>


using namespace std;
class Solution{
  public:
    void explainPriorityQueue(){
      priority_queue<int> pq;

      //largest element stays on the top
      pq.push(10); // {10}
      pq.push(33); // {33,10}
      pq.push(12); // {33,12,10}
      pq.push(87);  // {87, 33, 12, 10}
      pq.emplace(53); // {87,53,33,12,10}

      cout << pq.top() <<endl;

      pq.pop();

      cout << pq.top()<<endl;
    }

    void explainMinHeap(){
      // priority queue with minimum element at top
      priority_queue<int, vector<int>, greater<int>> pq;
      pq.push(65);
      pq.push(22);
      pq.push(91);
      pq.push(78);
      pq.emplace(47);

      // { 22, 47, 65, 78, 91 }

      priority_queue<int, vector<int>, greater<int>> temp(pq);
      
      while (!temp.empty()){
        cout << temp.top() << " ";
        temp.pop();
      }
      
    }
};

int main(){
  Solution sol;
  // sol.explainPriorityQueue();
  sol.explainMinHeap();
  return 0;
}
