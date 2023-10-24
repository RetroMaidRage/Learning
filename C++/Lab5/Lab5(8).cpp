#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char city[100] = "";
    char district[100] = "";
    char street[100] = "";
    char building[100] = "";
    char apartment[100] = "";

    cout << "Введіть місто: ";
    cin.getline(city, sizeof(city));
    cout << "Введіть район: ";
    cin.getline(district, sizeof(district));
    cout << "Введіть вулицю: ";
    cin.getline(street, sizeof(street));
    cout << "Введіть будинок: ";
    cin.getline(building, sizeof(building));
    cout << "Введіть квартиру: ";
    cin.getline(apartment, sizeof(apartment));

    // Формування всієї адреси шляхом конкатенації рядків
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

    cout << "Місто: " << city << endl;
    cout << "Район: " << district << endl;
    cout << "Вулиця: " << street << endl;
    cout << "Будинок: " << building << endl;
    cout << "Квартира: " << apartment << endl;

    cout << "Повна адреса: " << full_address << endl;

    // Порівняння довжини міста та району
    int city_length = strlen(city);
    int district_length = strlen(district);

    if (city_length > district_length) {
        cout << "Місто довше за район." << endl;
    }
    else if (city_length < district_length) {
        cout << "Район довший за місто." << endl;
    }
    else {
        cout << "Місто і район мають однакову довжину." << endl;
    }

    return 0;
}
