#include <iostream>
using namespace std;
int divide(int numerator, int denominator);

int main() {
    int a, b;
    cout << "������ ���������: ";
    cin >> a;
    cout << "������ ���������: ";
    cin >> b;

    int result = divide(a, b);

    if (result == -1) {
        cout << "ĳ����� �� 0 �����������." << endl;
    }
    else {
        cout << "��������� ������: " << result << endl;
    }

    return 0;
}
