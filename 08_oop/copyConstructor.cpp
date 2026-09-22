#include <iostream>
#include <vector>

using namespace std;

class Chai {
 public:
  string* teaName;
  int servings;
  vector<string> ingredients;

  // parameterized constructor
  Chai(string name, int serve, vector<string> ingre) {
    teaName = new string(name);
    servings = serve;
    ingredients = ingre;
    cout << "Param Constructor Called" << endl;
  }

  ~Chai(){
    delete teaName;
    cout << "Destructor called" <<endl;
  }
  
  void displayChaiDetails() {
    cout << "Tea Name: " << *teaName << endl;
    cout << "Servings: " << servings << endl;
    cout << "Ingredients: ";
    for (string ingredient : ingredients) {
      cout << ingredient << " ";
    }
    cout << endl;
  }
};

int main() {
  Chai lemonTea("Lemon Tea", 2, {"water", "lemon", "honey"});
  lemonTea.displayChaiDetails();

  //copy the object
  Chai copiedChai = lemonTea;
  copiedChai.displayChaiDetails();

  // lemonTea.teaName = "Modified Lemon Tea";

  // cout << "Lemon Tea" <<endl;
  // lemonTea.displayChaiDetails();
  // cout<<"Copied Chai" <<endl;
  // copiedChai.displayChaiDetails();

  return 0;
}
