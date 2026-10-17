//
// Created by Евгения on 17.10.2026.
//

#ifndef INC_17_10_2026_TRUCK_H
#define INC_17_10_2026_TRUCK_H



#include "PassengerCar.h"

class Truck : public PassengerCar {
private:
    double load_capacity;
public:
    Truck(std::string b, std::string c, double tv, double fc, double lc)
        :PassengerCar(b , c, tv , fc), load_capacity(lc) {
        std::cout<< "[Створено об'єкт Truck для " << brand << "]\n";
    }
    ~Truck() {
        std::cout<< "[Знищено об'єкт Truck для " << brand << "]\n";
    }

    void setLoatCapacity(double lc) {
        load_capacity = lc;
    }
    double getLoadCapacity() {
        return  load_capacity;
    }

    void printInfo() override{
        PassengerCar::printInfo();
    std::cout  <<"Вантажопідйомність:" <<  load_capacity << "т\n";
    }

    double calculateCostPerTonKm(double fuel_price) {
        return (((fuel_consumption / 100.0) * fuel_price) / load_capacity);
    }
};
#endif //INC_17_10_2026_TRUCK_H
