#include <iostream>
using namespace std;
int main()
{
	int d1, d2, i;
	float v1[20], v2[20];
	cout << "Dati dimensiunea primului vector\n";
	cin >> d1;
	cout << "Dati cele " << d1 << " numere reale ale primului vector\n";
	for (i = 0; i <= d1 - 1; i++)
		cin >> v1[i];
	cout << "Dati dimensiunea celui de-al doilea vector\n";
	cin >> d2;
	cout << "Dati cele " << d2 << " numere reale ale celui de-al doilea vector\n";
	for (i = 0; i <= d2 - 1; i++)
		cin >> v2[i];

	///produs scalar
	float p, s = 0;
	if (d1 == d2)
	{
		for (i = 0; i <= d1 - 1; i++)
		{
			p = v1[i] * v2[i];
			s += p;
		}
		cout << "Produsul scalar a celor 2 vectori este " << s;
	}
	else cout << "Nu se poate calcula :(";
	return 0;

}
