#include <iostream>
using namespace std;

int main()
{
	int n1 = 0, n2 = 0, n3 = 0;

	cout << "Introduce los 3 numeros.\n";
	cin >> n1 >> n2 >> n3;

	// uso de operadores logicos
	if (n3 > n2 && n2>n1)
	{
		
			cout << "Estan en orden creciente.\n";
		
		
	}
	else
	{
		cout <<"No estan en orden creciente.\n";
	}
	
	return main();
}
