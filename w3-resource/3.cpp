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
}

string Person::setName(string name){
    this->name = name;
}

int Person::setAge(string age){
    this->age = age;
}

string Person::setCountry(string country){
 this->country = country;
}

string Person::getName(string name){
    return this->name;
}

int Person::getAge(string age){
    return this->age;
}

string Person::getCountry(string country){
    return this->country;
}


int main(){
    Person p1("Tanmay", 22, "INDIA");
    cout << p1.getName();
    
}