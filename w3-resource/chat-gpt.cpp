#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>

// Define the Person class
class Person {
public:
    Person(const std::string& name, int age) : name(name), age(age) {}

    // Getter for name
    std::string getName() const {
        return name;
    }

    // Getter for age
    int getAge() const {
        return age;
    }

private:
    std::string name;
    int age;
};

// Define the BankAccount class
class BankAccount {
public:
    BankAccount(Person owner, double balance = 0) : owner(owner), balance(balance) {
        // Generate a random 10-digit account number
        accountNumber = generateAccountNumber();
    }

    // Deposit funds into the account
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Deposited $" << amount << ". Current balance: $" << balance << std::endl;
        } else {
            std::cout << "Invalid deposit amount." << std::endl;
        }
    }

    // Withdraw funds from the account
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            std::cout << "Withdrew $" << amount << ". Current balance: $" << balance << std::endl;
        } else {
            std::cout << "Invalid withdrawal amount or insufficient balance." << std::endl;
        }
    }

    // Get the account balance
    double getBalance() const {
        return balance;
    }

private:
    Person owner;
    double balance;
    long long accountNumber;

    // Generate a random 10-digit account number
    long long generateAccountNumber() const {
        srand(static_cast<unsigned>(time(0)));
        return (rand() % 9000000000LL) + 1000000000LL;
    }
};

int main() {
    // Create a Person
    Person person1("John Doe", 30);

    // Create a BankAccount for the Person
    BankAccount account1(person1);

    // Example usage:
    account1.deposit(1000);  // Deposit $1000
    account1.withdraw(500);  // Withdraw $500

    std::cout << "Account balance for " << person1.getName() << ": $" << account1.getBalance() << std::endl;

    return 0;
}
