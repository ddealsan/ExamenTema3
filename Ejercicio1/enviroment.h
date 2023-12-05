
#ifndef EXAMENTEMA3_ENVIROMENT_H
#define EXAMENTEMA3_ENVIROMENT_H
#include <map>
#include <string>
#include "Variant.h"

class Enviroment {
private:
    std::map<std::string, Variant> symbolTable;

public:
    void setVariable(const std::string& name, const Variant& value);
    Variant getVariable(const std::string& name) const;
    // Otras funciones que puedas necesitar para manipular el entorno, como eliminar variables, etc.
};

#endif //EXAMENTEMA3_ENVIROMENT_H
