#include <iostream>
using namespace std;
int divide(int numerator, int denominator) {
    if (denominator == 0) {
        // �������� �� ������ �� 0
        return -1;
    }
    else {
        return numerator / denominator;
    }
}

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
