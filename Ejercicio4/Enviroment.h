#ifndef EXAMENTEMA3_ENVIROMENT_H
#define EXAMENTEMA3_ENVIROMENT_H

#ifndef EXAMENTEMA3_ENVIROMENT_H
#define EXAMENTEMA3_ENVIROMENT_H

#include <map>
#include <string>
#include "Variant.h"

class Enviroment {
private:
    std::map<std::string, Variant> symbolTable;

public:
    Enviroment() = default; // Constructor por defecto

    void insert(const std::string& name, const Variant& value);

    Variant getValue(const std::string& name) const;


    bool lookup(const std::string& name, Variant& value) const;

};

#endif //EXAMENTEMA3_ENVIROMENT_H

#endif //EXAMENTEMA3_ENVIROMENT_H
