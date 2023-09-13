#include "Fecha.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
	int mes;
	int dia;
	int año;
	
	cout << "Introduza el dia: ";
	cin >> dia;
	if (dia >= 31) {
		cout << "El dia ingresado no existe." << endl;
		dia = 1;
		cout << "El dia tomara el valor de: " << dia << endl;
	}


	cout << "Introduzca el mes: ";
	cin >> mes;
	
	if (mes < 1 || mes > 12) {
		cout << "El mes ingresado no existe." << endl;
		mes = 1;
		cout << "El mes tomara el valor de: " << mes << endl;
	}


	cout << "Introduza el año: ";
	cin >> año;
	
	Fecha Calen(mes, dia, año);
	Calen.DisplayDate();




	return 0;
}
