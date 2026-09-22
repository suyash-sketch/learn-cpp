// returnType functionName(parameters){
//   //function body
// }

#include <iostream>

using namespace std;

int checkTemperature(int temperature) { return temperature; }

// declaration of function
void serveChai(int cups );

void serveChai(string teaType = "Black Tea") {
  cout << "Serving " << teaType << endl;
}
int main() {
  int temp = checkTemperature(12);
  cout << temp << endl;
  serveChai();
  return 0;
}

// definition of the function
void serveChai(int cups) { cout << "Serving " << cups << " of chai" << endl; }
