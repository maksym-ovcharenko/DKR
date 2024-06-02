#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <string>

class Car {
private:
    int id;
    std::string make;
    std::string model;
    int year;
    std::string color;
    double price;
    std::string registration_number;

public:
    // Constructors
    Car();
    Car(int id, std::string make, std::string model, int year, std::string color, double price, std::string registration_number);

    // Setters
    void setId(int id);
    void setMake(const std::string& make);
    void setModel(const std::string& model);
    void setYear(int year);
    void setColor(const std::string& color);
    void setPrice(double price);
    void setRegistrationNumber(const std::string& registration_number);

    // Getters
    int getId() const;
    std::string getMake() const;
    std::string getModel() const;
    int getYear() const;
    std::string getColor() const;
    double getPrice() const;
    std::string getRegistrationNumber() const;

    // Overload the << operator
    friend std::ostream& operator<<(std::ostream& out, const Car& car);

    // toString method
    std::string toString() const;
};

#endif // CAR_H
