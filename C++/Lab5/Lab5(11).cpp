

// ������ <iostream.h> ����� ��������������� <iostream> ��� .h
// ������� main ������� ���� ��������� ����� int, ���� ��� ���� ������� ����� (0)
// ������ y = myFunc(int) ����� ��������������� myFunc(x);
 
//����������� ���
#include <iostream>
using namespace std;
int myFunc(int x);

int main() {
    int x, y;
    x = 5; // ������� �������� ��� x
    y = myFunc(x);
    cout << "���������: " << y << endl;
    return 0;
}

int myFunc(int a) {
    return 4 * a;
}
