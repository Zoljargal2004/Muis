#include <iostream>

using namespace std;

void swapReference(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 5, y = 10;
    swapReference(x, y);

    cout << x << "  " << y;
}
