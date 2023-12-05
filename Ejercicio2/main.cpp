#include "Enviroment.h"

int main() {
    // Crear una instancia de Enviroment
    Enviroment enviroment;

    // Crear instancias de Variant con valores
    Variant health(100);
    Variant position(std::make_pair(10.0, 20.0));

    // Insertar símbolos en el entorno
    enviroment.insert("playerHealth", health);
    enviroment.insert("playerPosition", position);

    // Obtener y mostrar los valores insertados
    Variant retrievedHealth = enviroment.getValue("playerHealth");
    Variant retrievedPosition = enviroment.getValue("playerPosition");

    // Mostrar los valores obtenidos
    std::cout << "Player Health: " << std::get<int>(retrievedHealth.getValue()) << std::endl;

    auto pos = std::get<std::pair<double, double>>(retrievedPosition.getValue());
    std::cout << "Player Position: (" << pos.first << ", " << pos.second << ")" << std::endl;

    // Realizar otras operaciones según sea necesario

    return 0;
}