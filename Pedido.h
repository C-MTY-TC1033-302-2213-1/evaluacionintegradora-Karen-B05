// Nombre: Karen Barrera
// Matricula: A00840405
// Fecha: 06-06-24

#ifndef Pedido_h
#define Pedido_h

#include <iostream>
#include <string>
#include <stdio.h>
#include <sstream>
#include <fstream>
#include "Verdura.h"
#include "Producto.h"
#include "Combo.h"

using namespace std;
const int MAX_PROD = 50;
class Pedido{
private:
    Producto *arrPtrProductos[MAX_PROD];
    int cantidad;

public:
    Pedido();

    void leerArchivo(string nombre);
    void ticketCliente();
};


#endif // Pedido_h
