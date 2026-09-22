
#include <iostream>

using namespace std;

int totalChaiServed(int chai[], int size){
  int total = 0;
  for (int i = 0; i < size; i++){
    total+=chai[i];
  }

  // for (int t : chai){
  //   total+=t;
  // }
  
  return total;
}

int main(){

  int chaiServed[7] = {50,60,70,66,54,80, 79};

  int total = totalChaiServed(chaiServed, 7);

  cout << "total chai served: " << total <<endl;

  return 0;
}
