#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>

class Vehicle {
protected:
    std::string brand;
public:
    Vehicle(std::string b);
    virtual ~Vehicle() = default;

    virtual void info();
    void setBrand(std::string b);
    void setBrand();  // перевантажений метод без параметрів
};

class LandVehicle : public Vehicle {
protected:
    int wheels;
public:
    LandVehicle(std::string b, int w);
    void info() override;
};

class WaterVehicle : public Vehicle {
protected:
    double displacement;
public:
    WaterVehicle(std::string b, double d);
    void info() override;
};

class Car : public LandVehicle {
    int doors;
public:
    Car(std::string b, int w, int d);
    void info() override;
    void setBrand(std::string b, std::string model);  // перевантаження
};

class Bike : public LandVehicle {
public:
    Bike(std::string b, int w);
    void info() override;
};

#endif // VEHICLE_H