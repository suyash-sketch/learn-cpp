#include <iostream>
#include <vector>

using namespace std;

class Chai{
  public:
    //data members (attributes)
    string teaName;
    int servings;
    vector<string> ingredients;

    void displayChaiDetails(){
      cout << "Tea Name: " << teaName <<endl;
      cout << "Servings: " << servings << endl;
      cout << "Ingredients: ";
      for(string ingredient : ingredients){
        cout << ingredient << " ";    
      }
      cout << endl;
    }
}; 

int main(){
  // int chai[4] = {1,2,3,4};

  // int total = 0;

  // for (int t : chai){
  //   total = total + t;
  // }
  // cout << total;
  Chai chaiOne;

  chaiOne.teaName = "Lemon Tea";
  chaiOne.servings = 2;
  chaiOne.ingredients = { "water", "lemon",  "honey", "sugar", "tea"};

  chaiOne.displayChaiDetails();
  return 0;
}
