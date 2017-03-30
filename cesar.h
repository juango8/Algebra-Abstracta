#ifndef CESAR_H
#define CESAR_H

#include <string>
#include <iostream>
//#include "funciones.h"

//using namespace std;

class cesar
{
    public:
        cesar(int);
        std::string cifrar (std::string);
        std::string decifrar (std::string);
        ~cesar();

    private:
        std::string alfabeto;
        int clave;
        int tam;
};

#endif // CESAR_H
