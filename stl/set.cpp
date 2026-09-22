#include <bits/stdc++.h>
#include <set>

using namespace std;


class Solution{

  public:
    void explainSet(){

      set<int> st;

      st.insert(10);
      st.insert(3);
      st.insert(3);
      st.insert(8);
      st.insert(23);
      st.insert(8);    

      auto it = st.find(23);

      cout << "Iterator returns the address: " << &it << " of the searched number: " << *it <<endl; 

      auto it2 = st.find(12);

      cout << "Searching for 12 (which is not in the set) gives us st.end()/some garbage value: " << *it2 <<endl;

      int cnt = st.count(3);
      cout << "Number of 3 in the set: " << cnt <<endl;
    }

    void explainMultiSet(){

      // everything is same set but also stores duplicate elements 
      multiset<int> ms;

      ms.insert(11);
      ms.insert(11);
      ms.insert(11);

      ms.erase(11); // erases all occurence of 11

      int cnt = ms.count(11);
      cout <<"count of 11: "<< cnt << endl;
      ms.insert(12);
      ms.insert(12);
      ms.insert(12);
      ms.insert(12);
      ms.insert(12);

      cout << "initial num of 12: " << ms.count(12) <<endl;
      
      ms.erase(ms.find(12)); // only a single 12 is erased

      cout << "count of 12 now: " << ms.count(12) <<endl;
      
      // delete multiple occurrences
      auto it = ms.find(12);

      ms.erase(it, next(it,2));
      cout << "count of 12 after deleting multiple occurences: " << ms.count(12) <<endl;
    }
};


int main(){
  Solution sol;
  // sol.explainSet();
  sol.explainMultiSet();
  return 0;
}
