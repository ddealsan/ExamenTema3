#include "Enviroment.h"

int main() {
    try {
        // Crear una instancia de Enviroment
        Enviroment enviroment;

        // ... (resto del código)

        // Ejemplos de uso con manejo de excepciones
        try {
            Variant retrievedHealth = enviroment.getValue("playerHealth");
            std::cout << "Player Health: " << std::get<int>(retrievedHealth.getValue()) << std::endl;
        } catch (const std::runtime_error& e) {
            std::cerr << "Error: " << e.what() << std::endl;
        }

        try {
            enviroment.insert("playerHealth", Variant(150)); // Intentar insertar un símbolo existente
        } catch (const std::runtime_error& e) {
            std::cerr << "Error: " << e.what() << std::endl;
        }

        // ... (resto del código)

    } catch (const std::exception& e) {
        std::cerr << "Excepción general: " << e.what() << std::endl;
    }

    return 0;
}