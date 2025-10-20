#include <iostream>
#include <string>

using namespace std;

class Car {
private:
    string brand;
    string model;
    int year;

public:
    Car(string brand, string model, int year)
        : brand(brand), model(model), year(year) {}

    void displayInfo() {
        cout << "Марка: " << brand << "\n"
             << "Модель: " << model << "\n"
             << "Год выпуска: " << year << "\n\n";
    }

    string getBrand() { return brand; }
    string getModel() { return model; }
    int getYear() { return year; }
};

int main() {
    Car myCar("Toyota", "Corolla", 2020);
    Car myCar2("BMW", "M5", 2024);
    myCar.displayInfo();
    myCar2.displayInfo();

    return 0;
}
