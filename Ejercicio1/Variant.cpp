#include "Variant.h"
#include <iostream> // Puedes incluir <iostream> aquí si es necesario

Variant::Variant() : data() {}

Variant::Variant(int value) : data(value) {}

Variant::Variant(const std::pair<double, double>& value) : data(value) {}

std::Variant<int, std::pair<double, double>> Variant::getValue() const {
    return data;
}