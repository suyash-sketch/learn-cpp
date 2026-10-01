#include <algorithm>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

class LinearSearch{
  public:
    int search(vector<int> &arr, int val){
      for (int i = 0; i < arr.size(); i++){
        if (arr[i] == val){
          return i;
        }
      }

      return -1;
    }  
};

int main(){
  vector<int> arr = {3,5,66,19,78,67};

  int val = 78;

  LinearSearch ss;

  int res_position = ss.search(arr, val);

  if (res_position == -1){
    cout << "Element is not present in array\n";
  } else {
    cout << "Element present at index: " << res_position <<endl;
  }

  return 0;
}
