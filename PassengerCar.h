//
// Created by Евгения on 17.10.2026.
//

#ifndef INC_17_10_2026_PASSENGERCAR_H
#define INC_17_10_2026_PASSENGERCAR_H

#include <string>
#include <iostream>

class PassengerCar {
protected:
    std::string brand;
    std::string color;
    double tank_volume;
    double fuel_consumption;
public:
    PassengerCar(std::string b, std::string c, double tv, double fc)
        :brand(b), color(c), tank_volume(tv), fuel_consumption(fc){}

    void setBrand(std::string b) {
        brand = b;
    }
    std::string getBrand() {
        return brand;
    }

    void setColor(std::string c) {
        color = c;
    }
    std::string getColor() {
        return  color;
    }

    void setTankVolume(double tv) {
        tank_volume = tv;
    }
   double getTankVolume() {
        return  tank_volume;
    }
    void setFuelConsumption(double fc) {
        fuel_consumption = fc;
    }
    double getFuelConsumption() {
        return  fuel_consumption;
    }
 virtual  void printInfo() {
        std::cout << "Авто" << brand << " ( " << color <<")\n"
        <<":" <<tank_volume <<"л/Витраати:" <<fuel_consumption <<"л /100км\n";
    }

    double calulateDistance() {
        return (tank_volume / fuel_consumption) * 100.0;
    }
};

#endif //INC_17_10_2026_PASSENGERCAR_H
