// Nombre: Karen Barrera
// Matricula: A00840405
// Fecha: 06-06-24

#include "Combo.h"

Combo::Combo(): Producto(){
    clave = 0;
}

Combo::Combo(string _nombre,int _precio,int _peso, int _clave): Producto(_nombre,_precio,_peso){
    clave = _clave;
}


string Combo::str(){
    return nombre + "-$" + to_string(precio) + "-" + to_string(peso) + "-$" + to_string(calculaTotalPagar()) + "-" + to_string(clave);
}

int Combo::calculaTotalPagar(){
    int total, descuento;
    total = 0;
    descuento = 0;

    if (clave == 1){
        total = precio * peso * clave;
        descuento = (total / 100) * 25;
        return total - descuento;
    }
    else if (clave == 2){
        total = precio * peso * clave;
        descuento = (total / 100) * 30;
        return total - descuento;
    }
    else{
        return precio * peso * clave;
    }
}
