#include<iostream>
using namespace std;

void main() {

	int a, b, c;
	cout << "Dame el dato de a: " << endl;
	cin >> a;
	cout << "Dame el dato de b: " << endl;
	cin >> b;
	cout << "Dame el dato de c: " << endl;
	cin >> c;
	// equilatero
	if (a == b && b == c && a == c)
	{
		cout << "El triangulo es equilatero" << endl;
	}


	// isoseles

	else if ((a == b && b!=c)||(a==c && c!=b) || (b==c && b!=a))
	{
		cout << "El triangulo es isoseles" << endl;
	}
// escaleno
	else
	{
		cout << "El triangulo es escaleno" << endl;
	}
	
	system("pause");

}

