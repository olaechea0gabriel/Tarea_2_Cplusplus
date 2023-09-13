#include <iostream>
#include <string>

using namespace std;

class MotorVehicle
{
private: 
	string marca;
	string combustible;
	int yearOfManufacture;
	string color;
	int motor;
public:
	MotorVehicle() {
		marca = "";
		combustible = "";
		yearOfManufacture = 0;
		color = "";
		motor = 0;
	}
	MotorVehicle(string make, string fueltype, int manufacture_year, string color1, int engineCapacity_)
		: marca(make), combustible(fueltype), yearOfManufacture(manufacture_year), color(color1), motor(engineCapacity_) {
	}
	void setmake(string make) {
		marca = make;
	}
	void setfueltype(string fueltype) {
		combustible = fueltype;
	}
	void setyearOfManufacture(int manufacture_year) {
		yearOfManufacture = manufacture_year;
	}
	void setcolor(string color1) {
		color = color1;
	}
	void setengineCapacity(int engineCapacity_) {
		motor = engineCapacity_;
	}
	string getmake() {
		return marca;
	}
	string getfueltype() {
		return combustible;
	}
	int getyearOfManufacture() {
		return yearOfManufacture;
	}
	string getcolor() {
		return color;
	}
	int getengineCapacity() {
		return motor;
	}
	void displatCarDetails() {
		cout << "\t" <<"Info del Vehiculo" << endl;
		cout << "Marca: " << getmake() << endl;
		cout << "Combustible: " << getfueltype() << endl;
		cout << "Ano de manufactura: " << getyearOfManufacture() << endl;
		cout << "Color: " << getcolor() << endl;
		cout << "Motor: " << getengineCapacity() << endl;
		return;
	}
};
