#include <bits/stdc++.h>
#include <vector>

using namespace std;

class BinarySearch{
  public:
    int binarySearch(vector<int> &arr, int x){
      int low = 0;
      int high = arr.size() - 1;

      while (low <= high){
        
        int mid = low + (high - low) / 2;

        // check if x is present at mid
        if (arr[mid] == x){
          return mid;
        }

        // if x is greater, ignore left half
        if (arr[mid] < x){
          low = mid + 1;
        }
        // if x is smaller, ignore right half
        else {
          high = mid - 1;
        }
      }

      return -1;
    }
};

int main(){
  vector<int> arr = {23, 33,59,67,98,100};
  int x = 59;

  BinarySearch bs;
  int result_position = bs.binarySearch(arr, x);

  if (result_position == -1){
    cout << "Element is not present in array\n";
  }
  else {
    cout << "Element is present at index: " << result_position <<endl;
  }

  return 0;
}
