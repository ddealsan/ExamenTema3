#include "variant.h"

Variant::Variant() : data() {}

Variant::Variant(int value) : data(value) {}

Variant::Variant(const std::pair<double, double>& value) : data(value) {}

std::variant<int, std::pair<double, double>> Variant::getValue() const {
    return data;
}