#include "Vehicle.h"
#include <iostream>

using namespace std;

// Vehicle
using namespace std;

Vehicle::Vehicle(string b) : brand(b) {}

void Vehicle::info() {
    cout << "This is a vehicle of brand: " << brand << endl;
}

void Vehicle::setBrand(string b) {
    brand = b;
}

void Vehicle::setBrand() {
    brand = "Unknown";
}

// LandVehicle
LandVehicle::LandVehicle(string b, int w) : Vehicle(b), wheels(w) {}

void LandVehicle::info() {
    cout << "Land vehicle, brand: " << brand << ", wheels: " << wheels << endl;
}

// WaterVehicle
WaterVehicle::WaterVehicle(string b, double d) : Vehicle(b), displacement(d) {}

void WaterVehicle::info() {
    cout << "Water vehicle, brand: " << brand << ", displacement: " << displacement << " tons" << endl;
}

// Car
Car::Car(string b, int w, int d) : LandVehicle(b, w), doors(d) {}

void Car::info() {
    cout << "Car brand: " << brand << ", wheels: " << wheels << ", doors: " << doors << endl;
}

void Car::setBrand(string b, string model) {
    brand = b + " " + model;
}

// Bike
Bike::Bike(string b, int w) : LandVehicle(b, w) {}

void Bike::info() {
    cout << "Bike brand: " << brand << ", wheels: " << wheels << endl;
}