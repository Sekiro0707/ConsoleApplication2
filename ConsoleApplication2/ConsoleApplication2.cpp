#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;


//struct detung {
//    string engine;
//    string color;
//    int ofowner;
//};
//
//
//struct Car {
//    string make;
//    string model;
//    int year;
//    double price;
//    bool isNegotiable;
//    detung details;
//};
//
//
//void cardata(Car& car);
//void displ(const Car cars[], int size);
//
//int main() {
//    const int SIZE = 3;
//    Car cars[SIZE];
//
//
//    for (int i = 0; i < SIZE; ++i) {
//        cout << "Введіть дані для автомобіля " << i + 1 << ":\n";
//        cardata(cars[i]);
//    }
//
//
//    displ(cars, SIZE);
//
//    return 0;
//}
//
//
//void cardata(Car& car) {
//    cout << "Марка: ";
//    cin >> car.make;
//    cout << "Модель: ";
//    cin >> car.model;
//    cout << "Рік випуску: ";
//    cin >> car.year;
//    cout << "Ціна: ";
//    cin >> car.price;
//    cout << "Торг доречний (1 - так, 0 - ні): ";
//    cin >> car.isNegotiable;
//    cout << "Двигун: ";
//    cin >> car.details.engine;
//    cout << "Колір: ";
//    cin >> car.details.color;
//    cout << "Кількість власників: ";
//    cin >> car.details.ofowner;
//}
//
//
//void displ(const Car cars[], int size) {
//    cout << left << setw(10) << "Марка"
//        << setw(10) << "Модель"
//        << setw(12) << "Рік"
//        << setw(10) << "Ціна"
//        << setw(15) << "Торг доречний"
//        << setw(10) << "Двигун"
//        << setw(10) << "Колір"
//        << setw(20) << "Кількість власників"
//        << endl;
//
//    for (int i = 0; i < size; ++i) {
//        cout << left << setw(10) << cars[i].make
//            << setw(10) << cars[i].model
//            << setw(12) << cars[i].year
//            << setw(10) << cars[i].price
//            << setw(15) << (cars[i].isNegotiable ? "Так" : "Ні")
//            << setw(10) << cars[i].details.engine
//            << setw(10) << cars[i].details.color
//            << setw(20) << cars[i].details.ofowner
//            << endl;
//    }
//}