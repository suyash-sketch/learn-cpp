#include <iostream>
#include <string>

using namespace std;

class Tea{
  public:
    virtual void prepareIngredients() = 0; // pure virtual function

    virtual void brew() = 0;

    virtual void serve() = 0;

    void makeTea(){
      prepareIngredients();
      brew();
      serve();
    }
};

// derived class

class GreenTea : public Tea{
  public:
    void prepareIngredients() override {
      cout << "green leaves and water is ready\n";
    }

    void brew() override {
      cout << "Green Tea brewed\n";
    }

    void serve() override {
      cout << "Green Tea Served\n";
    }
};
class MasalaTea : public Tea{
  public:
    void prepareIngredients() override {
      cout << "Masala and water is ready\n";
    }

    void brew() override {
      cout << "Masala Tea brewed\n";
    }

    void serve() override {
      cout << "Masala Tea Served\n";
    }
};

int main(){

  GreenTea greenTea;
  MasalaTea masalaTea;

  greenTea.makeTea();
  masalaTea.makeTea();
}
