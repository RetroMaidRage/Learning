#include <iostream>
using namespace std;
int addNumbers(int a, int b = 0) {
    return a + b;
}

int main() {
    int num1 = 5;
    int num2 = 3;

    int sum1 = addNumbers(num1, num2);
    int sum2 = addNumbers(num1);  // Другий операнд береться за замовчуванням (0)

    cout << "Сума num1 та num2: " << sum1 << endl;
    cout << "Сума num1 та 0 (за замовчуванням): " << sum2 << endl;

    return 0;
}
