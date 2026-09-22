#include <iostream>

using namespace std;

// int* prepareChaiOrders(int cups){
//   int* orders = new int[cups];
//   for(int i = 0; i < cups; i++) {
//     orders[i] = (i + 1) * 10;
//   }

//   return orders;
// }

void modify(int &x, int y){
  x = x + y;
  y = x -y;
}

int main(){
  
  // int cups = 5;
  // int* chaiorder = prepareChaiOrders(cups);

  // for (int i = 0; i < cups;i++){
  //   cout << "Cups: " << i + 1 << " has " << chaiorder[i] << " ml\n";
  // }

  // delete[] chaiorder;

  int a = 10, b = 5;
  modify(a, b);
  cout << a << " " << b << endl;
  
  return 0;
}
