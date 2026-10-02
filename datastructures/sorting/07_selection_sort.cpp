#include <iostream>
#include <vector>

using namespace std;

class SelectionSort{
  public:
    void selectionSort(vector<int> &arr){
      int n = arr.size() - 1;

      for (int i = 0; i < n; i++){
        // assume the current position holds the min number
        int min_idx = i;

        // iterate to find the actual minimum element
        for (int j = i + 1; j < n;j++){

          // update min_idx if smaller element is found
          if (arr[min_idx] > arr[j]){
            min_idx = j;
          }
        }

        // move min element to its correct position
        swap(arr[min_idx], arr[i]);
      }
    }

    void print(vector<int> &arr){
        for (int num : arr){
            cout << num << " ";
        }
        cout << endl;
    }
};


int main(){
    SelectionSort ss;
    vector<int> arr = {63,22,12,98,43};
    cout << "Unsorted array: \n";
    ss.print(arr);
    cout << "Sorted array: \n";
    ss.selectionSort(arr);
    ss.print(arr);
}
