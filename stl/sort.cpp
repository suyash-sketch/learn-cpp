#include <algorithm>
#include <bits/stdc++.h>
#include <functional>
#include <utility>
#include <vector>

using namespace std;

class Solution{
  public:
    void explainInBuiltSorting(){
      vector<int> vec = {2,1,55,22,19};

      sort(vec.begin(), vec.end());
      for (auto it : vec){
        cout << it << " ";
      }
      cout <<endl;


      // sort in descending order
      sort(vec.begin(), vec.end(), greater<int>());
      for (auto it = vec.begin(); it != vec.end();it++){
        cout << *it << " ";
      }
    }

    static bool comp(pair<int, int> p1, pair<int, int> p2) {
      if (p1.second < p2.second) return true;
      if (p1.second  > p2.second) return false;

      // if they are same
      if (p1.first > p2.first) return true;
      return false;
    }
    void sortMyWay(){
      pair<int, int> a[] = {{1,2}, {2,1}, {4,1}};

      // sort it according to second element
      // if the second element is same, then sort it according to first element
      // but in decending order
      sort(a, a+3, comp);

      for (auto it : a){
        cout << "{ " << it.first << ", " << it.second << " }" << " , ";
      }
      cout <<endl;
    }
};

int main(){
  Solution sol;
  // sol.explainInBuiltSorting();
  sol.sortMyWay();

  // Important built-in function

  // calculates number of set bits (1) of a given number's binary form
  int num = 7;
  int cnt = __builtin_popcount(num);

  cout << "count of 1 in: " << num << " are " << cnt <<endl;
                                 
  // next permutation

  string s = "213";
  sort(s.begin(), s.end());
  do {
    cout << s <<endl;
  } while (next_permutation(s.begin(), s.end()));
  return 0;
}

