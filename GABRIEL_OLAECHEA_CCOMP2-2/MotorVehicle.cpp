#include "MotorVehicle.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
	string marca;
	string combustible;
	int yearOfManufacture;
	string color;
	int motor;
	
	cout << "Cual es la marca del vehiculo: ";
	cin >> marca;
	cout << "Cual es el tipo de combustible del vehiculo: ";
	cin >> combustible;
	cout << "De que ano es el vehiculo: ";
	cin >> yearOfManufacture;
	cout << "Cual es el color del vehiculo: ";
	cin >> color;
	cout << "De cuanto es el motor del vehiculo: ";
	cin >> motor;

	MotorVehicle carro(marca, combustible, yearOfManufacture, color, motor);
	carro.displatCarDetails();

	return 0;
}
