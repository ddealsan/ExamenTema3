#include "Enviroment.h"

int main() {

    Enviroment enviroment;


    Variant health(100);
    Variant position(std::make_pair(10.0, 20.0));


    enviroment.insert("playerHealth", health);
    enviroment.insert("playerPosition", position);


    Variant retrievedHealth;
    Variant retrievedPosition;

    if (enviroment.lookup("playerHealth", retrievedHealth)) {
        std::cout << "Player Health: " << std::get<int>(retrievedHealth.getValue()) << std::endl;
    } else {
        std::cout << "Player Health not found in the environment." << std::endl;
    }

    if (enviroment.lookup("playerSpeed", retrievedPosition)) {
        auto pos = std::get<std::pair<double, double>>(retrievedPosition.getValue());
        std::cout << "Player Position: (" << pos.first << ", " << pos.second << ")" << std::endl;
    } else {
        std::cout << "Player Position not found in the environment." << std::endl;
    }


    return 0;
}