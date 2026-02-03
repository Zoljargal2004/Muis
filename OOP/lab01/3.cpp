#include<iostream>
using namespace std;

int talbai (int a, int b) {
    return a * b;
}

int main () {
    // Утга зарлах
    int a , b;
    // Утга авах
    cout << "tegsh untsugtin utga: ";
    cin >> a >> b;
    // Гаралт
    cout << "niit talbai " << talbai(a, b);
}

