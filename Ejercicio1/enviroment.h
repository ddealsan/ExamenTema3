
#ifndef EXAMENTEMA3_ENVIROMENT_H
#define EXAMENTEMA3_ENVIROMENT_H


class enviroment {
private:
    std::map<std::string, Variant> symbolTable;
public:
    void setVariable(const std::string& name, const Variant& value);
    Variant getVariable(const std::string& name) const;
};


#endif //EXAMENTEMA3_ENVIROMENT_H
