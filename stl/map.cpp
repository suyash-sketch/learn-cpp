#include <bits/stdc++.h>
#include <map>

using namespace std;
class Solution{
  public:
    void explainMap(){
      map<int, int> mpp;

      mpp[1] = 3;
      mpp.insert({6, 22});
      mpp.emplace(5,87);    

      
      for(auto it : mpp){
        cout << it.first << " : " << it.second <<endl;
      }

      // for(auto it = mpp.begin(); it != mpp.end();it++){
      //   cout << it->first << " : " << it->second <<endl;
      // }

      auto itt = mpp.find(6);
      cout << itt->second;
    }
};

int main(){
  Solution sol;
  sol.explainMap();
  return 0;
}
