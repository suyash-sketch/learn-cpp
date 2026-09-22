#include <iostream>
#include <string>

using namespace std;

int main(){
  string userTea;
  int teaQuantity;

  
  float teaBagPrice = 45.89;
  char teaRating = '5';
  string teaName = "lemon tea";

  cout <<"Type of Tea: "<< teaName <<"\t Price: "<<teaBagPrice<< "\t Rating: "  << teaRating<<endl;

  cout << "Enter base price for tea\n";
  cin >> teaBagPrice;
  float TeaBagNewPrice= teaBagPrice + teaBagPrice*0.1;
  cout<<"Price of Tea Bag Increased by 10%: " << (int) TeaBagNewPrice<<endl;
  // cout<<"what tea would you like to order\n";
  // getline(cin,userTea);

  // // ask for quantity
  // cout<<"how many cups of "<< userTea << " would you like to have\n";
  // cin >> teaQuantity;
  // cout<< teaQuantity<<endl;
  // cout<<userTea;
  return 0;
}
    
