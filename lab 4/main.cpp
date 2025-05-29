#include <iostream>
#include "Vehicle.h"

using namespace std;

int main() {
    Vehicle* vehicles[5];

    vehicles[0] = new Vehicle("Generic");
    vehicles[1] = new LandVehicle("Toyota", 4);
    vehicles[2] = new WaterVehicle("Yamaha", 3.5);
    vehicles[3] = new Car("Honda", 4, 4);
    vehicles[4] = new Bike("Giant", 2);

    for (int i = 0; i < 5; i++) {
        vehicles[i]->info();
    }

    // Перевантажений метод
    Car* myCar = dynamic_cast<Car*>(vehicles[3]);
    if (myCar) {
        myCar->setBrand("Ford", "Mustang");
        myCar->info();
    }

    for (int i = 0; i < 5; i++) {
        delete vehicles[i];
    }

    return 0;
}