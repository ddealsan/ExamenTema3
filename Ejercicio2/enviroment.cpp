#include "Enviroment.h"

// Método para insertar un nuevo símbolo en el entorno
void Enviroment::insert(const std::string& name, const Variant& value) {
    symbolTable[name] = value;
}

// Método para obtener el valor de un símbolo
Variant Enviroment::getValue(const std::string& name) const {
    auto it = symbolTable.find(name);
    if (it != symbolTable.end()) {
        return it->second;
    }
    // Manejo de error: devolver un valor por defecto o lanzar una excepción según tus necesidades
    return Variant(); // Devuelve un Variant por defecto
}