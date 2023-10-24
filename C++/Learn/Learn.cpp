#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    int age;
    string gender;
    double scholarship;

public:
    // Конструктор за замовчуванням
    Student() : age(0), gender(""), scholarship(0.0) {}

    // Конструктор з параметрами
    Student(int a, const string& g, double s) : age(a), gender(g), scholarship(s) {}

    // Деструктор
    ~Student() {}

    // Методи доступу для встановлення значень
    void setAge(int a) {
        age = a;
    }

    void setGender(const string& g) {
        gender = g;
    }

    void setScholarship(double s) {
        scholarship = s;
    }

    // Методи доступу для отримання значень
    int getAge() const {
        return age;
    }

    const string& getGender() const {
        return gender;
    }

    double getScholarship() const {
        return scholarship;
    }

    // Метод для виведення даних на екран
    void displayStudentData() const {
        cout << "Вік: " << age << ", Стать: " << gender << ", Стипендія: " << scholarship << endl;
    }
};

int main() {
    Student student1;
    student1.setAge(20);
    student1.setGender("Чоловічий");
    student1.setScholarship(1000.0);

    Student student2;
    student2.setAge(22);
    student2.setGender("Жіночий");
    student2.setScholarship(1200.0);

    // Виведення значень окремих членів-даних на екран
    cout << "Перший студент: ";
    student1.displayStudentData();
    cout << "Другий студент: ";
    student2.displayStudentData();

    // Розрахунок середнього віку та сумарної стипендії
    int averageAge = (student1.getAge() + student2.getAge()) / 2;
    double totalScholarship = student1.getScholarship() + student2.getScholarship();

    cout << "Середній вік: " << averageAge << endl;
    cout << "Загальна стипендія: " << totalScholarship << endl;

    return 0;
}
