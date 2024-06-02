#include <iostream>
#include <vector>
#include "car.h"
#include "logger.h"
#include "encryption.h"

void filterByMake(const std::vector<Car>& cars, const std::string& make) {
    for (const auto& car : cars) {
        if (car.getMake() == make) {
            std::cout << car << std::endl;
        }
    }
}

void filterByModelAndYears(const std::vector<Car>& cars, const std::string& model, int years) {
    int current_year = 2024; 
    for (const auto& car : cars) {
        if (car.getModel() == model && (current_year - car.getYear()) > years) {
            std::cout << car << std::endl;
        }
    }
}

void filterByYearAndPrice(const std::vector<Car>& cars, int year, double price) {
    for (const auto& car : cars) {
        if (car.getYear() == year && car.getPrice() > price) {
            std::cout << car << std::endl;
        }
    }
}

int main() {
    Logger logger("log.txt");

    std::vector<Car> cars = {
        Car(1, "Toyota", "Camry", 2010, "Red", 8000, "ABC123"),
        Car(2, "Honda", "Accord", 2015, "Blue", 12000, "XYZ789"),
        Car(3, "Ford", "Mustang", 2018, "Black", 25000, "LMN456"),
        Car(4, "Toyota", "Corolla", 2020, "White", 15000, "JKL012")
    };

    logger.log("Starting car filtering...");

    std::cout << "Cars of make 'Toyota':" << std::endl;
    filterByMake(cars, "Toyota");

    std::cout << "\nCars of model 'Accord' used more than 5 years:" << std::endl;
    filterByModelAndYears(cars, "Accord", 5);

    std::cout << "\nCars from year 2018 with price greater than 20000:" << std::endl;
    filterByYearAndPrice(cars, 2018, 20000);

    // Encryption example
    std::string data = "Sensitive data to be encrypted";
    std::string encrypted_data = Encryption::encrypt(data);
    std::string decrypted_data = Encryption::decrypt(encrypted_data);

    std::cout << "\nOriginal data: " << data << std::endl;
    std::cout << "Encrypted data: " << encrypted_data << std::endl;
    std::cout << "Decrypted data: " << decrypted_data << std::endl;

    logger.log("Finished car filtering and encryption example.");

    return 0;
}
