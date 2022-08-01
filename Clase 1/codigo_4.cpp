#include<iostream>
using namespace std;

void main() {
	
	
	int experiencia, puntosedu, puntosexp;
	char gradoeduc;
	// puntos por tus años de experiencia
	cout << " Cuantos años de experiencia: " << endl;
	cin >> experiencia;

	cout << "Grado educativo: " << endl;
	cin >> gradoeduc;

	if (experiencia<5)
	{
		puntosexp = 5;
	}
	else { puntosexp = 10; }



//puntos por tu grado educativo

	switch (gradoeduc)
	{
	case'P':
		puntosedu = 5;
		break;
	case'S':
		puntosedu = 10;
		break;

	case'U':
		puntosedu = 15;
		break;

	case'G':
		puntosedu = 20;
		break;

	default:
		cout << " Error ";
		break;
	}



	cout << puntosedu + puntosexp << endl;

	system("pause");

}

