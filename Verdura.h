// Nombre: Karen Barrera
// Matricula: A00840405
// Fecha: 06-06-24

#ifndef Verdura_h
#define Verdura_h

#include "Producto.h"
#include <string>
#include <stdio.h>

using namespace std;
class Verdura: public Producto{
private:
    string temporada;

public:
    Verdura();
    Verdura(string _nombre,int _precio,int _peso, string _temporada);

    string str();
    int calculaTotalPagar();
};

#endif // Verdura_h
