#include <iostream>
using namespace std;
int main()
{

    int  min, max, temp, lis[5] = {2, 3, 4, 5, 6};
    min = lis[0];
    max = lis[0];

    for (int i = 0; i < 5; i++)
    {
        if(lis[i] > max){
            max = lis[i];
        }
        if(lis[i] < min){
            min = lis[i];
        }
    }
    cout << "hamgin baga utga: " << min << endl;
    cout << "hamgin ih utga: " << max << endl;
}