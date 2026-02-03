#include <iostream>
using namespace std;
int main()
{
    int n, s = 0, p = 1, temp;
    cout << "n: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> temp;
        s += temp;
        p *= temp;
    }
    cout << "niit niilber: " << s << endl;
    cout << "niit urjver: " << p << endl;

}