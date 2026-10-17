#include <iostream>
#include <iomanip>
#include "Truck.h"
#include "PassengerCar.h"
#include "Talking_book.h"

using namespace  std;
int main() {
    cout << fixed << setprecision(2);

    cout <<"_Перевірка Завдання 1 =_\n";
    PassengerCar legkova ("Audi A6", "Чорний", 65.0, 8.5);
    legkova.printInfo();
    cout <<"Запас ходу: "  << legkova.calculateDistance()<< " км\n";

    {
        Truck kamaz("MAN TGX", "Червоний", 500.0, 30.0, 18.0);
        kamaz.printInfo();
        cout << "Собівартість 1 т/км (пальне по 55.0 грн): "
             << kamaz.calculateCostPerTonKm(55.0) << " грн\n";
    }
    cout << "\n-Перевірка Завдання 2-\n";
    Book b ("Лина Костенко", "Маруся Чурай", "1979-01-01", 978966);
    Voice_recoding vr("Андрій Потапенко", 145, "2024-05-10");
    Talking_book tb("Джордж Орвелл", "Колгосп тварин", "1945-08-17", 978123, "Василь Стус", 210, "2025-01-20", 2);

    cout <<"Виведення окремої книги:\n";
    b.showBook();
    cout <<"\nВиведення окремого запису:\n";
    vr.showAudio();

    cout << "\nВиведення об'єднаної аудіокниги:\n";
    tb.showTalkingBook();



}
