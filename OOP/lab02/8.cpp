#include <iostream>

using namespace std;

int main()
{
    int a = 125;
    // p дотор а-н санах ойн утгыг хадгалж байна
    int *p = &a;
    cout << p << endl;
    // а-н утгыг хэвлэнэ
    cout << *p << endl;
    // p дээр 4 byte нэмэгдэнэ
    p++;
    cout << p << endl;
    // тодорхойгүй утга
    cout << *p << endl;
}