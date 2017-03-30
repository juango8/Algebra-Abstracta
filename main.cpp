#include <iostream>
#include <string>
#include "cesar.h"

using namespace std;

int main()
{
    int clave = 13;
	string texto = "n fua kmor nhvqremndpr";
	string cifrado;
	string decifrado;

	/*cout << "ingrese texto: ";
	getline(cin,texto);
	cout << "clave: ";
	cin >> clave;*/

	cesar emisor(clave);
	cesar receptor(clave);

	cifrado = emisor.decifrar(texto);
	decifrado = receptor.cifrar(cifrado);

	cout << cifrado << endl;
	cout << decifrado << endl;

	return 0;
}
