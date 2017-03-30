#include "cesar.h"

int mod(int a, int b){
        if (a == b)
            return 0;
        else if (0 < a and a < b)
            return a;
        else{
            int q, r;
            q = a/b;
            r = a - (q*b);
            if (r < 0)
                r = r + b;
            return r;
        }
}

int euclides(int a, int b){
    int temp;
    while (b != 0){
        temp = mod(a,b);
        a = b;
        b = temp;
    }
    return a;
}

cesar::cesar(int x)
{
    this->alfabeto = "abcdefghijklmnopqrstuvwxyz ";
    this->tam = alfabeto.size();
    this->clave = x;
}

std::string cesar::cifrar(std::string texto)
{
    int temp;
	std::string textocifrado/* = ""*/;

	for(int i = 0; i < texto.size(); i++){
		temp = mod(alfabeto.find(texto[i]) + clave, tam);
		textocifrado += alfabeto[temp];
	}
	return textocifrado;
}

std::string cesar::decifrar(std::string texto)
{
    /*int temp;
	std::string textodecifrado = "";

	for(int i = 0; i < texto.size(); i++){
		temp = mod(alfabeto.find(texto[i]) - clave, tam);
		textodecifrado += alfabeto[temp];
	}

	return textodecifrado;*/
    clave = -clave;
    return cifrar(texto);

}

cesar::~cesar()
{
    //dtor
}
