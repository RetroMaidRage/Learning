#include <iostream>
using namespace std;
void doubleNumber(int& x) {
    x = x * 2;
}

int main() {
    int num = 5;
    cout << "Початкове значення: " << num << endl;

    doubleNumber(num);

    cout << "Після подвоєння: " << num << endl;

    return 0;
}
