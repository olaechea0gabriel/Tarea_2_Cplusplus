#include <iostream>
#include "Ferreteria.h"
#include <string> 

using namespace std;

int main() {
    Ferreteria factura{ "5", "Serrucho", 15, 100, 0.2, 5.0 };
    cout << "El numero de pieza es: " << factura.getnumero() << endl;
    cout << "La Descripcion de la pieza es: " << factura.getdescripcion() << endl;
    cout << "La cantidad de articulos es: " << factura.getcantidad() << endl;
    cout << "El precio del articulo seria: " << factura.getprecio() << endl;
    cout << "El impuesto es: " << factura.getvat() << endl;
    cout << "El descuento es: " << factura.getdesc() << endl;


    double importeRecibo = factura.getnvoiceAmount();

    cout << "Importe del recibo: " << importeRecibo << endl;

    return 0;


}
