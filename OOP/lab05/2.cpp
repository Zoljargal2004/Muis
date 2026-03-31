#include <iostream>
#include <cstring>
using namespace std;

class Employee {
private:
    char name[20];
public:
    Employee(const char n[]) {
        strcpy(name, n);
    }

    void show() {
        cout << name << endl;
    }
};

int main() {
    int n = 3;

    Employee* arr[3];

    arr[0] = new Employee("Bat");
    arr[1] = new Employee("Dorj");
    arr[2] = new Employee("Bold");

    for (int i = 0; i < n; i++) {
        arr[i]->show();
    }

    for (int i = 0; i < n; i++) {
        delete arr[i];
    }

    return 0;
}