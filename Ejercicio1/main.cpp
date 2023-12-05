#include "Enviroment.h"
#include <iostream>

int main() {

    Enviroment scriptEnviroment;


    scriptEnviroment.setVariable("playerHealth", Variant(100));
    scriptEnviroment.setVariable("playerPosition", Variant(std::make_pair(0.0, 0.0)));


    Variant health = scriptEnviroment.getVariable("playerHealth");
    Variant position = scriptEnviroment.getVariable("playerPosition");

    std::cout << "Player Health: " << std::get<int>(health.getValue()) << std::endl;
    auto pos = std::get<std::pair<double, double>>(position.getValue());
    std::cout << "Player Position: (" << pos.first << ", " << pos.second << ")" << std::endl;

    return 0;
}