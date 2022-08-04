#include<iostream>
using namespace std;

void main() {
	
	int n;
	
	do
	{
		cout << "Digita un numero : ";
		cin >> n;

	} while (n>10 || n<0);




	for (int i = 1; i <=n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}


	system("pause");

}
