#include "car.h"

// Constructors
Car::Car() : id(0), year(0), price(0.0) {}

Car::Car(int id, std::string make, std::string model, int year, std::string color, double price, std::string registration_number)
    : id(id), make(make), model(model), year(year), color(color), price(price), registration_number(registration_number) {}

// Setters
void Car::setId(int id) { this->id = id; }
void Car::setMake(const std::string& make) { this->make = make; }
void Car::setModel(const std::string& model) { this->model = model; }
void Car::setYear(int year) { this->year = year; }
void Car::setColor(const std::string& color) { this->color = color; }
void Car::setPrice(double price) { this->price = price; }
void Car::setRegistrationNumber(const std::string& registration_number) { this->registration_number = registration_number; }

// Getters
int Car::getId() const { return id; }
std::string Car::getMake() const { return make; }
std::string Car::getModel() const { return model; }
int Car::getYear() const { return year; }
std::string Car::getColor() const { return color; }
double Car::getPrice() const { return price; }
std::string Car::getRegistrationNumber() const { return registration_number; }

// Overload the << operator
std::ostream& operator<<(std::ostream& out, const Car& car) {
    out << "Car [ID=" << car.id << ", Make=" << car.make << ", Model=" << car.model
        << ", Year=" << car.year << ", Color=" << car.color << ", Price=" << car.price
        << ", Registration Number=" << car.registration_number << "]";
    return out;
}

// toString method
std::string Car::toString() const {
    return "Car [ID=" + std::to_string(id) + ", Make=" + make + ", Model=" + model
        + ", Year=" + std::to_string(year) + ", Color=" + color + ", Price="
        + std::to_string(price) + ", Registration Number=" + registration_number + "]";
}
