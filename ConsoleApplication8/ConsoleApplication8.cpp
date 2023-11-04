#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <windows.h>

using namespace std;

class Group {
public:
    Group(int id) : id(id) {
        logCreation("Group");
    }

    ~Group() {
        logDestruction("Group");
    }

private:
    int id;

    void logCreation(const string& objectType) {
        ofstream logFile("log.txt", ios::app);
        if (logFile.is_open()) {
            time_t now;
            struct tm localTime;
            time(&now);
            localtime_s(&localTime, &now);

            char timestamp[9];
            strftime(timestamp, 9, "%H:%M:%S", &localTime);
            logFile << "создан объект типа " << objectType << " " << id << " " << timestamp << "." << endl;
        }
    }

    void logDestruction(const string& objectType) {
        ofstream logFile("log.txt", ios::app);
        if (logFile.is_open()) {
            time_t now;
            struct tm localTime;
            time(&now);
            localtime_s(&localTime, &now);

            char timestamp[9];
            strftime(timestamp, 9, "%H:%M:%S", &localTime);
            logFile << "уничтожен объект типа " << objectType << " " << id << " " << timestamp << "." << endl;
        }
    }
};

class Student {
public:
    Student(int id) : id(id) {
        logCreation("Student");
    }

    ~Student() {
        logDestruction("Student");
    }

private:
    int id;

    void logCreation(const string& objectType) {
        ofstream logFile("log.txt", ios::app);
        if (logFile.is_open()) {
            time_t now;
            struct tm localTime;
            time(&now);
            localtime_s(&localTime, &now);

            char timestamp[9];
            strftime(timestamp, 9, "%H:%M:%S", &localTime);
            logFile << "создан объект типа " << objectType << " " << id << " " << timestamp << "." << endl;
        }
    }

    void logDestruction(const string& objectType) {
        ofstream logFile("log.txt", ios::app);
        if (logFile.is_open()) {
            time_t now;
            struct tm localTime;
            time(&now);
            localtime_s(&localTime, &now);

            char timestamp[9];
            strftime(timestamp, 9, "%H:%M:%S", &localTime);
            logFile << "уничтожен объект типа " << objectType << " " << id << " " << timestamp << "." << endl;
        }
    }
};

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    string username;
    cout << "Введите имя пользователя: ";
    cin >> username;

    ofstream logFile("log.txt");
    if (logFile.is_open()) {
        time_t now;
        struct tm localTime;
        time(&now);
        localtime_s(&localTime, &now);
        logFile << "============================================================================" << endl;
        char timestamp[9];
        strftime(timestamp, 9, "%H:%M:%S", &localTime);
        logFile << "пользователь " << username << " запустил приложение Mystat.exe в " << timestamp << "." << endl;
       
    }

    Student student1(1);
    Student student2(2);

    Group group1(1);
    Group group2(2);

   

    // Ваш код для работы с объектами Student и Group
    
    return 0;
}
