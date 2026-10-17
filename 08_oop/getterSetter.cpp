#include <iostream>
#include <vector>

using namespace std;

class Chai{
  private:
    string teaName;
    int servings;
    vector<string> ingredients;

  public:
    Chai(){
      teaName = "Unknown Tea";
      servings = 1;
      ingredients = { "Water", "Tea Leaves"};
    }


    Chai(string name, int serve, vector<string> ingre){
      teaName = name;
      servings = serve;
      ingredients = ingre;
    }

    // getter

    string getTeaName(){
      return teaName;
    }

    //setter
    void setTeaName(string name){
      //logic
      teaName = name;
    }

    // getter for serving
    int getServings(){
      return servings;
    }
    // setter for servings
    void setServings(int serve){
      servings = serve;
    }

    // getter for ingredients
    vector<string> getIngredients(){
      return ingredients;
    }

    void setIngredients(vector<string> ingre){
      ingredients = ingre;
    }

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
  Chai chai("Masala Chai", 3, {"Masala", "Adrak"});
  chai.displayChaiDetails();
  chai.setTeaName("Ginger Tea");
  chai.displayChaiDetails();
}
