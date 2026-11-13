#include <iostream>
using namespace std;
class Account {
protected:
  size_t mAmount;

public:
  explicit Account(size_t amount) : mAmount{amount}{};

  virtual ~Account() = default;

  virtual void Deposit(size_t amount) {
    if (amount > 0) mAmount += amount;
  }

  virtual void Withdraw(size_t amount) {
    if (mAmount >= amount) mAmount -= amount;
  }

  virtual void printBalance() { cout << mAmount << endl; }
};

class Savings : public Account {
private:
  float interest_rate{0.08f};
public:
  explicit Savings(const size_t balance) : Account(balance) {};

  void Deposit(size_t amount) override {
    Account::Deposit(amount);
    if (amount > 0)
      mAmount += static_cast<size_t>(amount * interest_rate);
  }
};

class Current : public Account {
public:
  explicit Current(const size_t amount) : Account{amount} {}
};

int main() {
  Savings s1(50000);
  Account * acc = &s1;

  // Account acc1(1000);
  // acc1.Deposit(5000);
  // acc1.printBalance();

  acc->Deposit(1000);
  acc->printBalance();

  acc->Withdraw(3000);
  acc->printBalance();


  Current c1(50000);
  acc = &c1;
  acc->Deposit(1000);
  acc->printBalance();

  acc->Withdraw(3000);
  acc->printBalance();
  return 0;
}
