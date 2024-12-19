#include <iostream>
#include <string>
using namespace std;

void extractAndDisplayDateTime(const string &dateTime){
    if (dateTime.length() == 12){
        string day = dateTime.substr(0, 2);
        string month = dateTime.substr(2, 2);
        string year = dateTime.substr(4, 4);
        string hour = dateTime.substr(8, 2);
        string minute = dateTime.substr(10, 2);

        cout << "Date : " << day << "/" << month << "/" << year << endl;
        cout << "Heure : " << hour << "h" << minute << endl;
    }else{
        cerr << "La chaîne doit contenir exactement 12 caractères." << endl;
        return;
    }
}

int main(){
    string dateTime = "010920091123";
    extractAndDisplayDateTime(dateTime);
    return 0;
}