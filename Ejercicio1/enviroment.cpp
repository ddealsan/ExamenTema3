#include "Enviroment.h"
#include <iostream>

void Enviroment::setVariable(const std::string& name, const Variant& value) {
    symbolTable[name] = value;
}

Variant Enviroment::getVariable(const std::string& name) const {
    auto it = symbolTable.find(name);
    if (it != symbolTable.end()) {
        return it->second;
    } else {
        std::cerr << "Error: Variable '" << name << "' no encontrada en el entorno.\n";
        return Variant();
    }
}