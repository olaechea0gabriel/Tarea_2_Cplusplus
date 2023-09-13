#include <string>
#include <iostream>

using namespace std;

class Fecha
{
private: 
	int mes;
	int dia;
	int año;

public:
	Fecha() {
		mes = 0;
		dia = 0;
		año = 0;
	}
	Fecha(int m, int d, int a)
		: mes(m), dia(d), año(a) {
		mes = (m <= 12) || (m > 0) ? m : 0;
	}
	void setmes(int m) {
		if ((m <= 12) && (m > 0)) {
			mes = m;
		}
	}
	void setdia(int d) {
		if (d <= 31){
			dia = d;
		}
		
	}
	void setaño(int a) {
		año = a;
	}
	
	
	int getmes() {
		return mes;
	}
	

	int getdia() {
		return dia;
	}
	
	
	int getaño() {
		return año;
	}

	
	void DisplayDate() {
		std::cout << getmes()<< "/" << getdia() << "/" << getaño();
		return;
	}
};

