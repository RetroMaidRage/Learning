#include <iostream>
using namespace std;
bool isYes(char ch) {
    return (ch == 'Y' || ch == 'y' || ch == '�' || ch == '�');
}

int main() {
    char input;
    cout << "������ ������ (Y/y/�/� ��� ����� ������): ";
    cin >> input;

    bool result = isYes(input);

    if (result) {
        cout << "�� ����� 'Y', 'y', '�' ��� '�'." << endl;
    }
    else {
        cout << "�� ����� ����� ������." << endl;
    }

    return 0;
}
