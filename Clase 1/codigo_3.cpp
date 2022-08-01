#include<iostream>
using namespace std;

void main() {

	
	int DD, MM, AAAA, TT, PP;
	long long codigo;
	cout << "Codigo de Barras:" << endl;
	cin >> codigo;

	PP = codigo % 100;
	codigo /= 100;
	TT = codigo % 100;
	codigo /= 100;
	AAAA = codigo % 10000;
	codigo /= 10000;
	MM = codigo % 100;
	codigo /= 100;
	DD = codigo;



	cout << " Dia: " << DD << endl;
	cout << "Mes: " << MM << endl;
	cout << " Año: " << AAAA << endl;
	cout << "Producto: " <<char(TT)<< endl;
	cout << " perecible?  " <<PP<< endl;
	
	if (PP==00)
	{
		cout << "Es perecible" << endl;
	}
	else { cout << "No es perecible" << endl;}

	system("pause");

}
