#include <iostream>
#include "enviroment.h"

int main() {
    try {
        // Crear una instancia de Enviroment
        Enviroment enviroment;

        // Insertar símbolos
        enviroment.insert("playerHealth", Variant(100));
        enviroment.insert("playerPosition", Variant(std::make_pair(1.0, 2.0)));

        // Buscar y obtener valores
        Variant healthValue;
        if (enviroment.lookup("playerHealth", healthValue)) {
            std::cout << "Player Health: " << std::get<int>(healthValue.getValue()) << std::endl;
        } else {
            std::cerr << "Player Health not found in the environment." << std::endl;
        }

        Variant positionValue;
        if (enviroment.lookup("playerPosition", positionValue)) {
            auto pos = std::get<std::pair<double, double>>(positionValue.getValue());
            std::cout << "Player Position: (" << pos.first << ", " << pos.second << ")" << std::endl;
        } else {
            std::cerr << "Player Position not found in the environment." << std::endl;
        }

        // Intentar insertar un símbolo existente
        try {
            enviroment.insert("playerHealth", Variant(150));
        } catch (const std::runtime_error& e) {
            std::cerr << "Error: " << e.what() << std::endl;
        }

    } catch (const std::exception& e) {
        std::cerr << "Excepción general: " << e.what() << std::endl;
    }

    return 0;
}