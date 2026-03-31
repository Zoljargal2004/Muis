#include <iostream>
using namespace std;

float avg(int lis[], int n)
{
    // нийлбэрийг олох утга зарлах
    float s = 0;
    // тоо болгоныг s дээр нэмэх
    for (int i = 0; i < n; i++)
    {
        s += lis[i];
    }

    // нийлбэрээ n тоод хувааж утга буцаах
    return s / n;
}

int main()
{
    // Утга зарлах
    int lis[5] = {1, 2, 3, 4, 12};
    // гаралт
    cout << "avg: " << avg(lis, 5);
}