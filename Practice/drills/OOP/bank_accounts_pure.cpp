#include <iostream>
#include <string>

/* Implement a Class using Pure Virtual Functions */
/* Abstract class with 2 Derived classes */

using namespace std;
class Account {
  protected:
    float balance;
  public:

    explicit Account(float amount) : balance(amount){}
    virtual ~Account() = default;
    virtual void Withdraw(float amount) =0;
    virtual void Deposit(float amount) =0;
    virtual void printBalance()=0;
};

class Savings : public Account{
    private:
    float interest_rate{0.8f};
    public:
      explicit Savings(float balance) : Account(balance){};

    void Withdraw(float amount) override{
      if (balance >= amount)
        amount += (amount * interest_rate);
        balance -= amount;
    }

    void Deposit(float amount) override{
      amount += (amount * interest_rate);
      balance += amount;
    }
    std::string accType(){
      return "Savings account";
    }
    void printBalance() override{
      cout << "Balance in your " << accType() << " "  << balance  << endl;
    }

};

class Current : public Account{
    public:
      explicit Current(float balance) : Account(balance){};

    void Withdraw(float amount) override{
      if (balance >= amount)
        balance -= amount;
    }

    void Deposit(float amount) override{
      balance += amount;
    }
    std::string accType(){
      return "Current account";
    }
    void printBalance() override{
      cout << "Balance in your " << accType() << " "  << balance  << endl;
    }

};


int main() {
  Account *acc[2];
  acc[0] = new Savings(50000);
  acc[0]->Deposit(1000);
  acc[0]->printBalance();

  acc[0]->Withdraw(3000);
  acc[0]->printBalance();

  acc[1] = new Current(50000);
  acc[1]->Deposit(1000);
  acc[1]->printBalance();

  acc[1]->Withdraw(3000);
  acc[1]->printBalance();
  return 0;
}
