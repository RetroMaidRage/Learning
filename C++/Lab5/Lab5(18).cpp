#include <iostream>
using namespace std;
int addNumbers(int a, int b = 0) {
    return a + b;
}

int main() {
    int num1 = 5;
    int num2 = 3;

    int sum1 = addNumbers(num1, num2);
    int sum2 = addNumbers(num1);  // ������ ������� �������� �� ������������� (0)

    cout << "���� num1 �� num2: " << sum1 << endl;
    cout << "���� num1 �� 0 (�� �������������): " << sum2 << endl;

    return 0;
}
