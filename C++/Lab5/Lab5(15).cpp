#include <iostream>
using namespace std;
inline int charToNumber(char ch) {
    return ch - '0';
}

int main() {
    char digit = '5';
    int number = charToNumber(digit);

    cout << "������� �������� ������� " << digit << ": " << number << endl;

    return 0;
}
