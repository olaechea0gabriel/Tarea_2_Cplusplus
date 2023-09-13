
#include <iostream>
#include <string>

using namespace std;

class lista {
private:
    unsigned int numero_cuenta;
    std::string nombres;
    std::string apellidos;
    double balance;

public:
    lista() : numero_cuenta(0), nombres(""), apellidos(""), balance(0.0) {
    }

    lista(unsigned int cuenta_num, std::string nomb, std::string apelli, double saldo)
        : numero_cuenta(cuenta_num), nombres(nomb), apellidos(apelli), balance((saldo > 0) ? saldo : 0.0) {
    }

    void setnumero_cuenta(unsigned int cuenta_num) {
        numero_cuenta = cuenta_num;
    }

    void setnombres(std::string nomb) {
        nombres = nomb;
    }

    void setapellidos(std::string apelli) {
        apellidos = apelli;
    }

    void setbalance(double saldo) {
        balance = (saldo > 0) ? saldo : 0.0;
    }

    unsigned int getnumero_cuenta() {
        return numero_cuenta;
    }

    std::string getnombres() {
        return nombres;
    }

    std::string getapellidos() {
        return apellidos;
    }

    double getbalance() {
        return balance;
    }
    void display() {
        cout << "Su numero de cuenta es: " << getnumero_cuenta() << "\n";
        cout << "Nombre del Usuario: " << getnombres() << " " << getapellidos() << "\n";
        cout << "Su balance es: " << getbalance() << "\n";
    }
};

