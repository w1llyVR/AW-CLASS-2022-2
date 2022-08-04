//exit

#include<iostream>
using namespace std;

void main() {
	
	char caracter;

	while (true)
	{
		cout << "Digite una letra: ( s = salir)" << endl;
		cin >> caracter;

		if (caracter =='S'|| caracter =='s')
		{
			exit(0);
		}

	}
	
	system("pause");

}
