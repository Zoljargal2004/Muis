#include <iostream>
#include <cstring>

using namespace std;

class Employee {
private:
    char name[20];

public:
    Employee(const char n[]){
        strcpy(name, n);
        cout << "Constructor called for " << name << endl;
    }

    ~Employee(){
        cout << "Destructor called for " << name << endl;
    }

    void show(){
        cout << "Name: " << name << endl;
    }
};

int main(){
    Employee* e = new Employee("Bat");

    e->show();

    delete e; 

    return 0;
}