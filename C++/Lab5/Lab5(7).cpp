#include <iostream>
#include <cctype>
using namespace std;
char tolowerR(char ch) {
    if (ch >= '�' && ch <= '�') {
        return ch + 32;
    }
    return ch;
}

char toupperR(char ch) {
    if (ch >= '�' && ch <= '�') {
        return ch - 32;
    }
    return ch;
}

bool isalphaR(char ch) {
    return (ch >= '�' && ch <= '�');
}

bool islowerR(char ch) {
    return (ch >= '�' && ch <= '�');
}

bool isupperR(char ch) {
    return (ch >= '�' && ch <= '�');
}

bool isalnumR(char ch) {
    return isalphaR(ch) || (ch >= '0' && ch <= '9');
}

int main() {
    char character = '�';
    char lowercase = tolowerR(character);
    char uppercase = toupperR(character);

    cout << "����������� � ����� ������: " << lowercase << endl;
    cout << "����������� � ������ ������: " << uppercase << endl;

    if (isalphaR(character)) {
        cout << "�� �����." << endl;
    }
    else {
        cout << "�� �� �����." << endl;
    }

    return 0;
}
