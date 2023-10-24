#include <iostream>
using namespace std;
bool isYes(char ch) {
    return (ch == 'Y' || ch == 'y' || ch == 'д' || ch == 'Д');
}

int main() {
    char input;
    cout << "Введіть символ (Y/y/д/Д або інший символ): ";
    cin >> input;

    bool result = isYes(input);

    if (result) {
        cout << "Ви ввели 'Y', 'y', 'д' або 'Д'." << endl;
    }
    else {
        cout << "Ви ввели інший символ." << endl;
    }

    return 0;
}
