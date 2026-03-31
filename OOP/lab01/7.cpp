#include <iostream>
using namespace std;
int main()
{
    // хувьсагчидаа зарлана
    int count = 0, lis[5] = {2, 4, 6, 7, 9};

        // тоо болгоныг 2 т хуваагдах эсэхийг шалгаж, хуваагдах бол хэвлэнэ
    for (int i = 0; i < 5; i++)
    {
        if (lis[i] % 2 == 0)
        {
            count++;
        }
    }

    // гаралт
    cout << "tegsh toonud: " << count;
}