#include <iostream>
using namespace std;
void doubleNumber(int& x) {
    x = x * 2;
}

int main() {
    int num = 5;
    cout << "��������� ��������: " << num << endl;

    doubleNumber(num);

    cout << "ϳ��� ��������: " << num << endl;

    return 0;
}
