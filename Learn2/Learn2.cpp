#include <iostream>

class Date {
private:
    int day;
    int month;
    int year;

public:
    Date(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

    // Методи доступу для дня, місяця та року
    int getDay() {
        return day;
    }

    int getMonth() {
        return month;
    }

    int getYear() {
        return year;
    }

    // Логічні методи для перевірки частин дати
    bool isLeapYear() {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            return true;
        }
        return false;
    }

    // Метод для роздруківки дати в різних форматах
    void printDate() {
        std::cout << day << "." << month << "." << year << std::endl;
        std::cout << day << "/" << month << "/" << year << std::endl;
        std::cout << month << "-" << day << "-" << year << std::endl;
    }
};

int main() {
    Date date(24, 10, 2023);

    date.printDate();

    if (date.isLeapYear()) {
        std::cout << "Це високосний рік" << std::endl;
    }
    else {
        std::cout << "Цей рік не є високосним" << std::endl;
    }

    return 0;
}
