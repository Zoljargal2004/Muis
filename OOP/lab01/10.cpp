#include <iostream>
using namespace std;
int main()
{
    // хувьсагчийг зарлах
    int n = 41;

    //n тоог 2 оос n / 2 хүртэлх тоонд хувааж үзнэ 
    for (int i = 2; i < float(n) / 2; i++)
    {
        // хэрвээ n тоо i д хуваагдлал "not prime гэж хэвлээд"
        // функцийг буцаана
        if(n % i == 0){
            cout << "not prime";
            return 0;
        }
    }
    // "prime гэж хэвлэнэ"
    cout << "prime";
}