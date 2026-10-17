#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Chai{
  private:
    string teaName;
    int servings;

  public:
    // another way to declare constructor
    // Chai(string name, int serve): teaName(name), servings(serve){};

    Chai(string name, int serve){
      teaName = name;
      servings = serve;
    }  

    friend bool compareServings(const Chai &chai1,const Chai &chai2);

    void display() const{
      cout << "Tea Name: " << teaName << endl;
    }
};

bool compareServings(const Chai &chai1,const Chai &chai2){
  return chai1.servings > chai2.servings;
}

int main(){
  Chai masalaChai("Masala Chai", 4);
  Chai gingerChai("Ginger Chai", 8);

  gingerChai.display();
  masalaChai.display();

  if (compareServings(masalaChai, gingerChai)){
    cout << "Masala Chai is having more servings\n"; 
  }else {
    cout << "Masala Chai is having less servings\n";
  }
}
