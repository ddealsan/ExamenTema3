#include "Enviroment.h"


void Enviroment::insert(const std::string& name, const Variant& value) {
    symbolTable[name] = value;
}


Variant Enviroment::getValue(const std::string& name) const {
    auto it = symbolTable.find(name);
    if (it != symbolTable.end()) {
        return it->second;
    }

    return Variant(); // Devuelve un Variant por defecto
}


bool Enviroment::lookup(const std::string& name, Variant& value) const {
    auto it = symbolTable.find(name);
    if (it != symbolTable.end()) {
        value = it->second;
        return true;
    }

    return false;
}