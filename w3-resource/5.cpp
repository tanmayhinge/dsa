#include <iostream>

using namespace std;



class Person{
    public:

        string getName();
        int getAge();
        string getCountry();

        string setName(string name);
        int setAge(int age);
        string setCountry(string country);


    private:
        string name;
        int age;
        string country;
};

class BankAccount{

    public:
        BankAccount(int accountNumber, Person x, int money);

    private:
        int accountNumber;
        Person x;
        int money;


};

BankAccount::BankAccount(int accountNumber, Person x, int money){
    this->accountNumber = accountNumber;
    this->x = x;
    this->money = money;
}



string Person::setName(string name){
    this->name = name;
}

int Person::setAge(int age){
    this->age = age;
}

string Person::setCountry(string country){
 this->country = country;
}

string Person::getName(){
    return this->name;
}

int Person::getAge(){
    return this->age;
}

string Person::getCountry(){
    return this->country;
}


int main(){
    Person p1;
    p1.setName("Tanmay");
    p1.setAge(22);
    p1.setCountry("INDIA");
    cout << p1.getName();

    BankAccount b1(1234, p1, 69);
    
    
}