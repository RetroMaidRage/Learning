#include <iostream>
using namespace std;
int divide(int numerator, int denominator);

int main() {
    int a, b;
    cout << "Введіть чисельник: ";
    cin >> a;
    cout << "Введіть знаменник: ";
    cin >> b;

    int result = divide(a, b);

    if (result == -1) {
        cout << "Ділення на 0 недопустиме." << endl;
    }
    else {
        cout << "Результат ділення: " << result << endl;
    }

    return 0;
}
