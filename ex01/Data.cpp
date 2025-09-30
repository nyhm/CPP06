#include "Data.hpp"

Data::Data() : value(0), name("default") {}

Data::Data(int val, const std::string& n) : value(val), name(n) {}

Data::Data(const Data& other) : value(other.value), name(other.name) {}

Data& Data::operator=(const Data& other) {
    if (this != &other) {
        value = other.value;
        name = other.name;
    }
    return *this;
}

Data::~Data() {}
