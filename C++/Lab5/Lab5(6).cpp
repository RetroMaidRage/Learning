#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char buffer[100]; // ����� �-����� ��� ���������� ��������� ������
    cout << "������ �����: ";
    cin.getline(buffer, sizeof(buffer));

    // ������������ ����� �� ���� �����
    int integer_number = atoi(buffer);

    // ������������ ����� �� ����� �����
    long long_number = atol(buffer);

    // ������������ ����� �� ������ �����
    double double_number = atof(buffer);

    cout << "ֳ��: " << integer_number << endl;
    cout << "�����: " << long_number << endl;
    cout << "������: " << double_number << endl;

    return 0;
}
