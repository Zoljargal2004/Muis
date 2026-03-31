#include <iostream>
#include <cstring>

using namespace std;

class Employee {
private:
    char *name;
    char *position;

public:
    Employee() {
        name = new char[1];
        name[0] = '\0';

        position = new char[1];
        position[0] = '\0';
    }

    Employee(const char* n, const char* p) {
        name = new char[strlen(n) + 1];
        strcpy(name, n);

        position = new char[strlen(p) + 1];
        strcpy(position, p);
    }

    Employee(const Employee& other) {
        name = new char[strlen(other.name) + 1];
        strcpy(name, other.name);

        position = new char[strlen(other.position) + 1];
        strcpy(position, other.position);
    }

    Employee& operator=(const Employee& other) {
        if (this != &other) {
            delete[] name;
            delete[] position;

            name = new char[strlen(other.name) + 1];
            strcpy(name, other.name);

            position = new char[strlen(other.position) + 1];
            strcpy(position, other.position);
        }
        return *this;
    }

    ~Employee() {
        delete[] name;
        delete[] position;
    }

    void input() {
        char n[100], p[100];
        cout << "Ner: ";
        cin >> n;
        cout << "Ajil: ";
        cin >> p;

        delete[] name;
        delete[] position;

        name = new char[strlen(n) + 1];
        strcpy(name, n);

        position = new char[strlen(p) + 1];
        strcpy(position, p);
    }

    void show() const {
        cout << "Ner: " << name << ", Ajil: " << position << endl;
    }

    const char* getName() const {
        return name;
    }
};

void sortEmployees(Employee arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(arr[i].getName(), arr[j].getName()) > 0) {
                Employee temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void sortPointers(Employee* arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(arr[i]->getName(), arr[j]->getName()) > 0) {
                Employee* temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}


int main() {
    int n;
    cout << "Ajilchdin too: ";
    cin >> n;

    

    Employee* arr = new Employee[n];

    for (int i = 0; i < n; i++) {
        cout << "\nAjilchin " << i + 1 << endl;
        arr[i].input();
    }

    sortEmployees(arr, n);

    cout << "\nSorted (object):\n";
    for (int i = 0; i < n; i++) {
        arr[i].show();
    }

    Employee** ptrArr = new Employee*[n];
    for (int i = 0; i < n; i++) {
        ptrArr[i] = &arr[i];
    }

    sortPointers(ptrArr, n);

    cout << "\nSorted (pointer):\n";
    for (int i = 0; i < n; i++) {
        ptrArr[i]->show();
    }

    delete[] ptrArr;
    delete[] arr;

    return 0;
}