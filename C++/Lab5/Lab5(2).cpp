#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double a, b, angle;
    cout << "������ ������� ����� ������� a: ";
    cin >> a;
    cout << "������ ������� ����� ������� b: ";
    cin >> b;
    cout << "������ ��� �� ���� � ��������: ";
    cin >> angle;

    // ������������ ������� � ������
    double radians = angle * M_PI / 180.0;

    // ������������ �������� ��� ����������� ������ �������
    double c = sqrt(a * a + b * b - 2 * a * b * cos(radians));

    cout << "����� ������� ����������: " << c << endl;

    return 0;
}
