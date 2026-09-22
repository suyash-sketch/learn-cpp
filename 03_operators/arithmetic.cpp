#include <iostream>

using namespace std;

int main(){
  int cups;
  double pricePerCup, totalPrice, discountedPrice;
  cout<<"Enter the number of tea cups"<<endl;
  cin>>cups;
  
  
  cout<<"Enter price per cups"<<endl;
  cin>>pricePerCup;
  
  totalPrice = cups*pricePerCup;
  // apply 5% discount if total price is above 100

  if (totalPrice >100){
    discountedPrice = totalPrice - (totalPrice*0.05);   
    cout<<"Discounted Price is: " << discountedPrice <<endl;
  }else {
    cout << "Total Price is " << totalPrice<< endl;
  }

  return 0;
}
