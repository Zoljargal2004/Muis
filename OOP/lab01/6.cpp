#include <iostream>
using namespace std;
int main()
{
    // хувьсагчидаа зарлана
    int  min, max, lis[5] = {2, 3, 9, 5, 6};
    // min, max -д эхний тоог тавина
    min = lis[0];
    max = lis[0];
    // array доторх тоог болгоноо min, max тайгаа харьцуулна
    for (int i = 0; i < 5; i++)
    {
        if(lis[i] > max){
            max = lis[i];
        }
        if(lis[i] < min){
            min = lis[i];
        }
    }
    // гаралт
    cout << "hamgin baga utga: " << min << endl;
    cout << "hamgin ih utga: " << max << endl;
}