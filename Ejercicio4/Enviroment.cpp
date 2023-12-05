#include "Enviroment.h"
#include <iostream>

// Método para insertar un nuevo símbolo en el entorno
void Enviroment::insert(const std::string& name, const Variant& value) {
    auto it = symbolTable.find(name);
    if (it != symbolTable.end()) {
        // El símbolo ya existe, verificar si el valor es el mismo
        if (it->second != value) {
            throw std::runtime_error("Intento de insertar un símbolo existente con un valor diferente.");
        } else {
            // El valor es el mismo, no hacemos nada
            return;
        }
    }

    symbolTable[name] = value;
}

// Método para obtener el valor de un símbolo
Variant Enviroment::getValue(const std::string& name) const {
    auto it = symbolTable.find(name);
    if (it != symbolTable.end()) {
        return it->second;
    }
    // El símbolo no existe en el entorno, lanzar una excepción
    throw std::runtime_error("Intento de acceder a un símbolo no existente.");
}

// Método para buscar un símbolo en el entorno
bool Enviroment::lookup(const std::string& name, Variant& value) const {
    auto it = symbolTable.find(name);
    if (it != symbolTable.end()) {
        value = it->second;
        return true;
    }
    // El símbolo no existe en el entorno, lanzar una excepción
    throw std::runtime_error("Intento de buscar un símbolo no existente.");
}