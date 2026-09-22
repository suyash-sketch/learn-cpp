#include <bits/stdc++.h>

using namespace std;
// Lists

class Solution{
  public:
    void explainList(){
      list<int> ls;

      ls.push_back(2);
      ls.emplace_back(4);

      ls.push_front(55);
      ls.emplace_front(99);

      cout << *ls.begin() << endl;

      // iterating list
      list<int>::iterator it = ls.begin();

      for (it = ls.begin(); it != ls.end();it++ ){
        cout << *it << " ";
      }
    }
};



int main(){

  Solution sol;

  sol.explainList();

  return 0;

}

