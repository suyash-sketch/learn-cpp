#include <bits/stdc++.h>
#include <vector>

using namespace std;

class BubbleSort{
  public:
    void bubbleSort(vector<int> &arr){
        int n = arr.size() - 1;
        bool swapped; 

        for (int i = 0; i < n; i++){
            swapped = false;
            for (int j = 0; j < n - i; j++){
                if (arr[j] > arr[j + 1]){
                    swap(arr[j], arr[j + 1]);
                    swapped = true;
                }
            }

            if (!swapped){
                break;
            }
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
    BubbleSort bs;
    vector<int> arr = {63,22,12,98,43};
    cout << "Unsorted array: \n";
    bs.print(arr);
    cout << "Sorted array: \n";
    bs.bubbleSort(arr);
    bs.print(arr);
}
