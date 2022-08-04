#include<iostream>
using namespace std;

void main() {
	
	int n;
	

	do
	{
		cout << "Digita un numero : ";
		cin >> n;

	} while (n>10);




	for (int i = 1; i <=n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cout << "*";
		}
		cout << endl;
	}


	system("pause");

}
