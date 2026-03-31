#include <iostream>

using namespace std;

int main()
{
    // Утга зарлах
    int lis[7] = {2, 6, 3, 8, 1, 5, 7};

    // index зарлана
    int i = 0;
    while (i < 6)
    {
        // хэрвээ урдах тоо нь өмнөх тоогоосоо бага бол
        // байраа сольж index-г 0 болгоно үгүй бол index урагшилна
        if (lis[i] > lis[i + 1])
        {
            int temp = lis[i + 1];
            lis[i + 1] = lis[i];
            lis[i] = temp;
            i = 0;
        }
        else
        {
            i++;
        }
    }
    // гаралт
    cout << "usuh eremb: ";
    for (int i = 0; i < 7; i++)
    {
        cout << lis[i] << " ";
    }
    // шинэ мөр
    cout << endl;

    // Index г болгоно
    i = 0;
    while (i < 6)
    {
        // хэрвээ урдах тоо нь өмнөх тоогоосоо их бол
        // байраа сольж index-г 0 болгоно үгүй бол index урагшилна
        if (lis[i] < lis[i + 1])
        {
            int temp = lis[i + 1];
            lis[i + 1] = lis[i];
            lis[i] = temp;
            i = 0;
        }
        else
        {
            i++;
        }
    }
    // гаралт
    cout << "buurah:  ";
    for (int i = 0; i < 7; i++)
    {
        cout << lis[i] << " ";
    }
}