#include <string>
#include <iostream>

using namespace std;



class Ferreteria {
private:
    string numero;
    string descripcion;
    int cantidad;
    int precio;
    double vat{ 0.2 };
    double desc{ 0 };

public:
    Ferreteria()
    {
        numero = "";
        descripcion = "";
        cantidad = 0;
        precio = 0;
        vat = 0;
        desc = 0;
    }
    Ferreteria(std::string numpieza, std::string despieza, int cantpieza, int preciopieza, double vatvalor, double descuento)
        : numero(numpieza), descripcion(despieza), cantidad(cantpieza), precio(preciopieza), vat(vatvalor), desc(descuento) {
    }
    void setnumero(string numpieza) {
        numero = numpieza;
    }
    void setdescripcion(string despieza) {
        descripcion = despieza;
    }
    void setcantidad(int cantpieza) {
        if (cantpieza > 0) {
            cantidad = cantpieza;
        }
    }
    void setprecio(int preciopieza) {
        if (preciopieza > 0) {
            precio = preciopieza;
        }
    }

    void setdesc(double descuento) {
        if (descuento > 0) {
            desc = descuento/100;
        }
    }
    void setvat(double vatvalor) {
        if (vatvalor > 0) {
            vat = vatvalor/100;
        }
    }
    string getnumero() {
        return numero;
    }
    string getdescripcion() {
        return descripcion;
    }

    int getcantidad() {
        return cantidad;
    }

    int getprecio() {
        return precio;
    }

    double getvat() {
        return vat;
    }

    double getdesc() {
        return desc;
    }
    double getnvoiceAmount() {
        double subtotal = cantidad * precio; 
        double vatAmount = subtotal * vat;   
    
        double total = subtotal + vatAmount; 
    
        double descuentoAmount = total * desc;
        total -= descuentoAmount;
    
        return total;
}

};

// Los valores son

// int main() {
//     Ferreteria factura{ "5", "Serrucho", 15, 100, 0.2, 5.0 };
// El invoiceAmount deberia de salir 1427.85


// (vat*(cantidad * precio))/100

// 100       1500          100     1503
// 0.2       3              5      75  
//                     FACTURA:    1427.85    

