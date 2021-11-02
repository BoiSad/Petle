#include <iostream>
using namespace std;
int main()
{
	/* double suma = 0, liczba;
	int n;

	do {
		cout << "Podaj ilosc studentow: ", cin >> n;
	} while (n <= 0);
	
	

	if (n > 0)
	{
		int i = 1;
			while (i <= n)
			{
				cout << "Podaj ilosc punktow " << i++ << " studenta ";
				cin >> liczba;
				suma += liczba;
			}
		cout << "Srednia punktow " << n << " studentow w grupie wynosi:  " << suma / n << endl;
	}
	else
		cout << "Podałeś nieprawidłową wartość" << endl;
*/

	cout << "zadanie 2: " << endl;
	double suma = 0, liczba;
	int n;

	do {
		cout << "Podaj ilosc studentow: ", cin >> n;
	} while (n <= 0);



	if (n > 0)
	{
		int i = 1;
		while (i <= n){
		
			
			cout << "Podaj ilosc punktow " << i++ << " studenta ";
			cin >> liczba;
			suma += liczba;
			
		}
		
		cout << "Srednia punktow " << n << " studentow w grupie wynosi:  " << suma / n << endl;
	}
	else
		cout << "Podałeś nieprawidłową wartość" << endl;
}
	