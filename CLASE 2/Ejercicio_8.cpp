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
		for (int j = 1; j <= n; j++)
		{
			
			if (j==1|| i==1|| j== n ||i==n)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}

		}
		cout << endl;
	}


	system("pause");

}
