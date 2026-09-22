#include <bits/stdc++.h>
#include <iostream>
#include <ostream>

using namespace std;

void explainVector(){
  vector<int> v;
  v.push_back(1);
  v.push_back(2);
  v.emplace_back(3);
  vector<int> vec = {1,2,3,4,5,6,7};
    
  // for (int i:v){
  //   cout << i <<endl;
  // }

  // vector<int>::iterator it = vec.begin();
  // cout << *(it)<<endl; 
  // it++;
  // cout << *(it) <<endl;
  // it+=2;
  // cout << *(it) <<endl;

  vector<int>::iterator it2 = vec.end();
  // cout<< *it2 <<endl;
  // it2--;
  // cout<< *it2 <<endl;

  // printing vectors using iterators
  // for (it2 = vec.begin(); it2 != vec.end();it2++) {
  //   cout << *it2 << " " ;
  // }


  // for (vector<int>::iterator ite = vec.begin(); ite != vec.end();ite++) {
  //   cout << *ite << " " ;
  // }

  // cout << *(vec.end()-1);

  // delete elements
  vec.erase(vec.begin()+2, vec.begin() + 4);

  // insert element
  // vec.insert(vec.begin() + 2, 100);

  vector<int> cpp(2,50);

  vec.insert(vec.end(), cpp.begin(), cpp.end());

  
  for (auto it = vec.begin(); it != vec.end();it++){
    cout << *(it) << " ";
  }
}

int main(){
  // explorePairs();
  explainVector();
  return 0;
}
