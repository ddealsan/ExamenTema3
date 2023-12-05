#ifndef EXAMENTEMA3_VARIANT_H
#define EXAMENTEMA3_VARIANT_H

#include <variant>
#include <iostream>
#include <map>
#include <string>

class Variant {
public:
    std::Variant<int, std::pair<double, double>> data;

    Variant(); // Constructor por defecto
    Variant(int value); // Constructor para enteros
    Variant(const std::pair<double, double>& value); // Constructor para pares de double

    // Obtener el valor
    std::Variant<int, std::pair<double, double>> getValue() const;
};

#endif //EXAMENTEMA3_VARIANT_H