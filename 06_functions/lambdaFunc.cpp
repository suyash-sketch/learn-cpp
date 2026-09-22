#include <iostream>

using namespace std;

int main(){

  //lambda
  auto prepardChai = [](int cups){
    cout << "Preparing " << cups << " cups of tea" <<endl;
  };
  prepardChai(10);
  return 0;
}
