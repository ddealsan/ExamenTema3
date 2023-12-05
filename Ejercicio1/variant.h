#ifndef EXAMENTEMA3_VARIANT_H
#define EXAMENTEMA3_VARIANT_H

#include <variant>
#include <iostream>
#include <map>
#include <string>

class Variant {
public:
    std::variant<int, std::pair<double, double>> data;

    // Constructor por defecto
    Variant() : data() {}

    // Constructor para enteros
    Variant(int value) : data(value) {}

    // Constructor para pares de double
    Variant(const std::pair<double, double>& value) : data(value) {}

    // Obtener el valor
    variant<int, std::pair<double, double>> getValue() const {
        return data;
    }
};

#endif //EXAMENTEMA3_VARIANT_H