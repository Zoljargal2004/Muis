#include <iostream>
using namespace std;
int main()
{
    int n;
    float s = 0;
    cout << "n: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        s += i;
    }
    cout << "niit utga: " << s << "\n";
    cout << "dundaj utga: " << s / n;
}