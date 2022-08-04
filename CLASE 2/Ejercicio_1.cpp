#include<iostream>
using namespace std;

void main() {
	
	int numero;
	// contadores
	int leidos = 0, positivos = 0, negativos = 0, suma = 0;

	int mayor = -99, menor = 99;


	do
	{
		cout << "Ingrese un numero: " << endl;
		cin >> numero;

		// numeros leidos

		leidos++;

		//cantidad positivos
		if (numero > 0) positivos++;

		// cantidad negativos

		if (numero < 0) negativos++;
		
		// mayor
		if (mayor < numero) mayor = numero;

		//menor
		if (menor > numero) menor = numero;

		// suma 
		suma = suma + numero;


	} while (numero!=0);


	 cout<<"Numeros leidos: "<<leidos           		<<endl;
	 cout<<"Cantidad positivos: "<<positivos			<<endl;
	 cout<<"Cantidad negativos : "<<negativos			<<endl;
	 cout<<"numero mayor: "<<mayor						<<endl;
	 cout<<"numero menor: "<<menor						<<endl;
	 cout<<"promedio"<<suma/(leidos-1)					<<endl;
														
	system("pause");

}
