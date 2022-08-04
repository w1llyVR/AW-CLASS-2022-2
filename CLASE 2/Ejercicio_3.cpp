//continue

#include<iostream>
using namespace std;

void main() {
	//i =123;

	int suma = 0;

	for (int i = 1; i <= 10; i++)
	{
		if (i % 2 != 0) continue;

		suma = suma + i;
	}
	
	cout << suma << endl;
	system("pause");

}
