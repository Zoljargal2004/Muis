#include <iostream>

using namespace std;

void swapPointer(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x = 5, y = 10;
    swapPointer(&x, &y);

    cout << x << "  " << y;
}
