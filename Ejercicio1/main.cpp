#include<iostream>
#include<map>
#include<string>
#include<variant>
#include "enviroment.h"

int main(){
    Enviroment scriptEnviroment;
    scriptEnviroment.setVariable("playerHealth", variant(100));
    scriptEnviroment.setVariable("PlayerPosition", Variant(std::make_pair(0.0,0.0)));


}