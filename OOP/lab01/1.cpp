#include <iostream>
using namespace std;
int main()
{
    // 3 тоо болон max гэх утгуудыг зарлана
    int a, b, c, max;
    // 3 тооны утгыг авна
    cin >> a >> b >> c;
    // a тоог b -д харьцуулж их утгыг авна. дараа нь c утгад харьцуулна
    max = a;
    if (b > a)
    {
        max = b;
    }
    if (c > max)
    {
        max = c;
    }

    cout << "ugsun 3 tooni hamgin ih utga: " << max;
}