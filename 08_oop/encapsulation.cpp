#include <iostream>

using namespace std;

class BankAccount{
  private:
    string accountNumber;
    double balance;

  public:
    BankAccount(string accNum, double initialBalance){
      accountNumber = accNum;
      balance = initialBalance;
    }

    //getter
    double getBalance() const {
      return balance;
    }

    void deposit(double amount){
      if (amount > 0){
        balance += amount;
        cout << "Deposited Amount: " << amount << endl;
      } else {
        cout << "Invalid deposit amount\n";
      }
    }

    void withdraw(double amount){
      if (amount > 0 && amount <= balance){
        balance -=amount; 
      }
      else {
        cout << "Invalid Withdrawal Amount\n";
      }
    }
};
