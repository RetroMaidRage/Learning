#include <iostream>
using namespace std;
bool areEqual(int a, int b) {
    return a == b;
}

bool areEqual(double a, double b) {
    return a == b;
}

bool areEqual(char a, char b) {
    return a == b;
}

int main() {
    int int1 = 5, int2 = 5;
    double double1 = 3.14, double2 = 3.14;
    char char1 = 'A', char2 = 'A';

    bool intResult = areEqual(int1, int2);
    bool doubleResult = areEqual(double1, double2);
    bool charResult = areEqual(char1, char2);

    cout << "����� int1 �� int2 ���������: " << intResult << endl;
    cout << "����� double1 �� double2 ���������: " << doubleResult << endl;
    cout << "������� char1 �� char2 ���������: " << charResult << endl;

    return 0;
}
