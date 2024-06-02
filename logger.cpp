#include "logger.h"
#include <iostream>
#include <ctime>

// Constructor
Logger::Logger(const std::string& filename) {
    log_file.open(filename, std::ios_base::app);
    if (!log_file.is_open()) {
        std::cerr << "Failed to open log file: " << filename << std::endl;
    }
}

// Destructor
Logger::~Logger() {
    if (log_file.is_open()) {
        log_file.close();
    }
}

// Log method
void Logger::log(const std::string& message) {
    if (log_file.is_open()) {
        std::time_t now = std::time(nullptr);
        char time_str[26];
        ctime_s(time_str, sizeof(time_str), &now);
        log_file << time_str << ": " << message << std::endl;
    }
}
