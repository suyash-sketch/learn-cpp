#include <iostream>

using namespace std;

int main(){
  float teaPrice = 49.99;
  int roundedTeaPrice = (int) teaPrice;
  int teaQuantity = 2;
  float totalPrice = teaPrice*teaQuantity;
  cout<<totalPrice<<endl;
  cout<<roundedTeaPrice<<endl;
  return 0;

}
