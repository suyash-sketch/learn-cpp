#include <bits/stdc++.h>
#include <vector>

using namespace std;
class InsertionSort{
    public:
        void insertionSort(vector<int> &arr){
            int n = arr.size();

            for (int index = 1; index < n; index++){
                int key = arr[index];
                int position = index - 1;

                while (position  >= 0 && arr[position] > key){
                    arr[position + 1] = arr[position];
                    position--;
                }

                arr[position+1] = key;
            }
        }
        void print(vector<int> &arr) {
          for (int num : arr) {
            cout << num << " ";
          }
          cout << endl;
        }
};

int main(){
    InsertionSort is;
    vector<int> arr = {63,22,12,98,43};
    cout << "Unsorted array: \n";
    is.print(arr);
    cout << "Sorted array: \n";
    is.insertionSort(arr);
    is.print(arr);
}
