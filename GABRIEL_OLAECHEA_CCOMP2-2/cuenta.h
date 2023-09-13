#include <iostream>
#include <string>

using namespace std;

class cuenta {
    private:
        string nombre;
        int monto_inicial{ 0 };
        int retiro;

    public:
        cuenta() {
            nombre = "";
            monto_inicial = 0;
            retiro = 0;
        }
    cuenta(string usuario, int monto, int salida)
        : nombre(usuario), monto_inicial(monto), retiro(salida) {
        monto_inicial = (monto > 0) ? monto : 0;
    }
    void setname(string usuario) {
        nombre = usuario;
    }
    void setmonto_inicial(int monto) {
        monto_inicial = (monto >= 0) ? monto : 0;
    }
    void setretiro(int salida) {
        retiro = (salida >= 0) ? salida : 0;
    }

    string getname() {
        return nombre;
    }
    int getmonto_inicial() {
        return monto_inicial;
    }
    int getretiro() {
        return retiro;
    }

    void deposit(int MontoDeposito) {
        if (MontoDeposito > 0) {
            monto_inicial = monto_inicial + MontoDeposito;
        }
    }
    void sacar(int ret) {
        if ((ret > 0) && (ret <= monto_inicial)) {
            monto_inicial = monto_inicial - ret;
        }
        else {
            cout << "Retiro no válido. El saldo actual es insuficiente o el monto de retiro es negativo." << "\n";
        }
       
    }
    bool reti(string i) {
        if (i == "si") {
            cout << "Ingrese el monto que desea retirar: ";
            return true;
        }
        else if (i == "no") {
            cout << "\t" << "ACABO LA TRANSACCION" << "\n";
            return false;
        }
    }


    void Display() {
        cout << "User1:" << getname() << " su monto inicial es $" << getmonto_inicial() << "\n";

        cout << "\n";
        cout << "Ingrese el monto que se agregará a su cuenta: ";

        int depositAmount;
        cin >> depositAmount;

        deposit(depositAmount);

        cout << "Agregando $" << depositAmount << "\n" << "Su monto actual es: " << getmonto_inicial() << "\n";
       
        string i;
        cout << "Desea retirar dinero?" << endl;
        cin >> i;
        reti(i);
            
        
        
        int monto_retiro;
        cin >> monto_retiro;

        sacar(monto_retiro);

        cout << "Retirando $" << monto_retiro << "\n" << "Su nuevo monto actual es: " << getmonto_inicial() << "\n";

        cout << "\n";

        cout << "\t" << "ACABO LA TRANSACCION" << "\n";
        


        //cout << "Ingrese el monto que desea retirar: ";

       
    }
};

