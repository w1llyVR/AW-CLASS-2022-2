
#include<iostream>
using namespace std;

void main() {

	int numero;
	cout << "Digita un numero: " << endl;
	cin >> numero;

	if (numero<=12)
	{
		cout << " El costo es de 7 soles" << endl;
	}

	else if (numero >= 65)
	{
		cout << " El costo es de 10 soles" << endl;
	}
	
	else
	{
		cout << " El costo es de 15 soles" << endl;
	}
	system("pause");

}
