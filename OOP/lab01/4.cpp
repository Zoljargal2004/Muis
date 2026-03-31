#include <iostream>
using namespace std;
int main()
{
    // n болон s тоог зарлана
    int n = 5;
    float s = 0;
    // n хүртэлх тоог s дээр нэмнэ
    for (int i = 1; i <= n; i++)
    {
        s += i;
    }
    // гаралт
    cout << "niit utga: " << s << "\n";
    cout << "dundaj utga: " << s / n;
}