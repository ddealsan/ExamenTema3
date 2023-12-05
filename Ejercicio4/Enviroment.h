#ifndef EXAMENTEMA3_ENVIROMENT_H
#define EXAMENTEMA3_ENVIROMENT_H



#include <map>
#include <string>
#include "Variant.h"

class Enviroment {
private:
    std::map<std::string, Variant> symbolTable;

public:
    // Estructura básica
    Enviroment() = default; // Constructor por defecto

    // Método para insertar un nuevo símbolo en el entorno
    void insert(const std::string& name, const Variant& value);

    // Método para obtener el valor de un símbolo
    Variant getValue(const std::string& name) const;

    // Método para buscar un símbolo en el entorno
    bool lookup(const std::string& name, Variant& value) const;

    // Otros métodos y funciones que puedas necesitar en la clase Enviroment
};



#endif //EXAMENTEMA3_ENVIROMENT_H
