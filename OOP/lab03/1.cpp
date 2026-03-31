#include <iostream>
#include <cstring>
using namespace std;

class Employee
{
private:
    int phoneNum;
    char name[20];
    char position[10];
    float workDuration;

public:
    void init();
    void input();
    void output();
    float payCheck();
    float directorCut();
    bool ajillasanTsag(float);
};

void Employee::init()
{
    phoneNum = 0;
    strcpy(name, "");
    strcpy(position, "ajiltan");
    workDuration = 0;
}

void Employee::input()
{
    cout << "Utasnii dugaar: ";
    cin >> phoneNum;

    cout << "Ner: ";
    cin >> name;

    cout << "Alban tushaal: ";
    cin >> position;

    cout << "Ajillasan tsag: ";
    cin >> workDuration;
}

void Employee::output()
{
    cout << "\n--- Medeelel ---\n";
    cout << "Ner: " << name << endl;
    cout << "Dugaar: " << phoneNum << endl;
    cout << "Alban tushaal: " << position << endl;
    cout << "Ajillasan tsag: " << workDuration << endl;
}

bool Employee::ajillasanTsag(float tsag)
{
    if (tsag >= 0 && tsag <= 24)
    {
        workDuration += tsag;
        return true;
    }
    return false;
}

float Employee::directorCut()
{
    // Захирлын нэмэгдэл цалин
    return workDuration * 5000;  // жишээ нэмэгдэл
}

float Employee::payCheck()
{
    float undsen = workDuration * 10000;  // 1 цаг = 10000

    if (strcmp(position, "zahiral") == 0)
    {
        undsen += directorCut();
    }

    return undsen;
}

int main()
{
    Employee e;

    e.init();
    e.input();

    e.output();

    cout << "\nTsalingiin dun: " << e.payCheck() << endl;

    if (e.ajillasanTsag(2))
        cout << "Tsag amjilttai nemegdlee.\n";
    else
        cout << "Buruu tsag oruulsan.\n";

    cout << "Shine tsalin: " << e.payCheck() << endl;

    return 0;
}