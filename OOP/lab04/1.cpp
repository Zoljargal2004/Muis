#include <cstring>
#include <iostream>

using namespace std;

class Employee
{
private:
    int phoneNum;
    char name[20];
    char position[10];
    float workDuration;
    float directorCut(){
        return workDuration * 100000;
    }

public:
    Employee(){
        phoneNum = 0;
        strcpy(name, "NoName");
        strcpy(position, "None");
        workDuration = 0;
    }

    float payCheck(){
        if(strcmp(position, "director") == 0){
            return directorCut();
        }
        else{
            return workDuration * 50000;
        }
    }

    void setPhoneNum(int p){
        phoneNum = p;
    }
    void setName(const char n[]){
        strcpy(name, n);
    }
    void setPosition(const char pos[]){
        strcpy(position, pos);
    }
    void setWorkDuration(float w){
        workDuration = w;
    }
    int getPhoneNum(){
        return phoneNum;
    }
    const char* getName(){
        return name;
    }

    const char* getPosition(){
        return position;
    }

    float getWorkDuration(){
        return workDuration;
    }

    void output(){
        cout << " name: " << name << "            paycheck: "<< payCheck()  << endl;
    }
};

int main(){
    int n;
    cin >> n;
    Employee arr[n];
    for(int i = 0; i < n; i++){
        char name[20], pos[10];
        int phone;
        float time;

        cin >> name >> pos >> phone >> time;

        arr[i].setName(name);
        arr[i].setPosition(pos);
        arr[i].setWorkDuration(time);
    }

    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j].payCheck() > arr[j+1].payCheck()){
                Employee t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
        }
    }
}

    for(int i = 0; i < n; i++){
        arr[i].output();
    }
}

    

