
#include <iostream>

using namespace std;

// call by reference
void pourChai(int &cups){
  cups  = cups + 5;
  cout << "Poured cups " <<cups<<endl;
}

int main(){
  int chaiCups = 2;

  // call by reference
  pourChai(chaiCups);
  cout << "total cups are " << chaiCups <<endl;
  return 0;
}
