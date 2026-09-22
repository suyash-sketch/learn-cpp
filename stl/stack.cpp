#include <bits/stdc++.h>
#include <stack>

using namespace std;
class Solution{
  public:
    void explainStack(){
      stack<int> st;

      st.push(33);
      st.push(22);
      st.push(87);
      st.push(12);

      // traversing a stack
      stack<int> temp(st); // copy the OG stack
      
      while (!temp.empty()){
        cout << temp.top() << " ";
        temp.pop();
      }
      cout <<endl;
    }
};

int main(){
  Solution sol;
  sol.explainStack();
  return 0;
}
