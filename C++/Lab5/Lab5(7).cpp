#include <iostream>
#include <cctype>
using namespace std;
char tolowerR(char ch) {
    if (ch >= 'А' && ch <= 'Я') {
        return ch + 32;
    }
    return ch;
}

char toupperR(char ch) {
    if (ch >= 'а' && ch <= 'я') {
        return ch - 32;
    }
    return ch;
}

bool isalphaR(char ch) {
    return (ch >= 'А' && ch <= 'я');
}

bool islowerR(char ch) {
    return (ch >= 'а' && ch <= 'я');
}

bool isupperR(char ch) {
    return (ch >= 'А' && ch <= 'Я');
}

bool isalnumR(char ch) {
    return isalphaR(ch) || (ch >= '0' && ch <= '9');
}

int main() {
    char character = 'І';
    char lowercase = tolowerR(character);
    char uppercase = toupperR(character);

    cout << "Переведення у нижній регістр: " << lowercase << endl;
    cout << "Переведення у верхній регістр: " << uppercase << endl;

    if (isalphaR(character)) {
        cout << "Це буква." << endl;
    }
    else {
        cout << "Це не буква." << endl;
    }

    return 0;
}
