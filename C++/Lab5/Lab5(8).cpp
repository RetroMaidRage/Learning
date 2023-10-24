#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char city[100] = "";
    char district[100] = "";
    char street[100] = "";
    char building[100] = "";
    char apartment[100] = "";

    cout << "������ ����: ";
    cin.getline(city, sizeof(city));
    cout << "������ �����: ";
    cin.getline(district, sizeof(district));
    cout << "������ ������: ";
    cin.getline(street, sizeof(street));
    cout << "������ �������: ";
    cin.getline(building, sizeof(building));
    cout << "������ ��������: ";
    cin.getline(apartment, sizeof(apartment));

    // ���������� �񳺿 ������ ������ ������������ �����
    char full_address[500] = "";
    strcat(full_address, city);
    strcat(full_address, ", ");
    strcat(full_address, district);
    strcat(full_address, ", ");
    strcat(full_address, street);
    strcat(full_address, ", ");
    strcat(full_address, building);
    strcat(full_address, ", ");
    strcat(full_address, apartment);

    cout << "̳���: " << city << endl;
    cout << "�����: " << district << endl;
    cout << "������: " << street << endl;
    cout << "�������: " << building << endl;
    cout << "��������: " << apartment << endl;

    cout << "����� ������: " << full_address << endl;

    // ��������� ������� ���� �� ������
    int city_length = strlen(city);
    int district_length = strlen(district);

    if (city_length > district_length) {
        cout << "̳��� ����� �� �����." << endl;
    }
    else if (city_length < district_length) {
        cout << "����� ������ �� ����." << endl;
    }
    else {
        cout << "̳��� � ����� ����� �������� �������." << endl;
    }

    return 0;
}
