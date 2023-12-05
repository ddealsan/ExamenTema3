
#ifndef EXAMENTEMA3_VARIANT_H
#define EXAMENTEMA3_VARIANT_H
class Variant {
private:
    std::variant<int, std::pair<double, double>> data;

public:
    Variant(); // Constructor por defecto
    Variant(int value); // Constructor para enteros
    Variant(const std::pair<double, double>& value); // Constructor para pares de double

    std::variant<int, std::pair<double, double>> getValue() const; // Obtener el valor
};
#endif //EXAMENTEMA3_VARIANT_H
