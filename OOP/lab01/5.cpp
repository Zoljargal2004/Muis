#include <iostream>
using namespace std;
int main()
{
    // утгуудаа зарлана
    int n, s = 0, p = 1, temp;
    // n тоог гараас авна
    cout << "n: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        // гараас авсан тоо болгоныг  temp д хадгалж
        // s дээр нэмж, p-д үржинэ
        cin >> temp;
        s += temp;
        p *= temp;
    }
    // гаралтW
    cout << "niit niilber: " << s << endl;
    cout << "niit urjver: " << p << endl;

}