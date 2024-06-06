// Nombre: Karen Barrera
// Matricula: A00840405
// Fecha: 06-06-24

#ifndef Producto_h
#define Producto_h

#include <string>
#include <stdio.h>

using namespace std;
class Producto{
protected:
    string nombre;
    int precio;
    int peso;

public:
    Producto();
    Producto(string _nombre,int _precio,int _peso);

    void setNombre(string _nombre);
    void setPrecio(int _precio);
    void setPeso(int _peso);

    string getNombre();
    int getPrecio();
    int getPeso();

    virtual string str();
    virtual int calculaTotalPagar();
};

#endif // Producto_h
