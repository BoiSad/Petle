#include <iostream>
#include <time.h>
using namespace std;
int main()
{
	int i = 0, liczba,n,suma = 0,a, ile_d = 0, suma_d = 0, ile_u = 0, suma_u = 0;
	cout << "ZADANIE 1: ";
	cout << "Podaj liczbe: ";
	cin >> liczba;



	cout << "petla while: ";
	while (i < liczba)
	{
		cout << i << " ";
		i++;


	}
	cout << "Petla do while: ";

	do
	{
		cout << i << " ";
		i++;
	} while (i < liczba);

	cout << "Petla for: ";
	for (i = 0; i < liczba; i++)
	{
		cout << i << " " <<endl;

	}

	  cout << "ZADANIE 2: "<<endl;

	do
	{
		cout << "Podaj liczbe:  ", cin >> a;
	} while (a >= 0);



	cout << "ZADANIE 3: "<<endl;

	for (int b = 0; b < 10; b++) {
		cout << "Podaj liczbe: ", cin >> liczba;
		if (liczba >= 0) {
			ile_d++;
			suma_d += liczba;
		}
		else {
			ile_u++;
			suma_u += liczba;
		}
	}
	cout << "Suma liczb dodatnich: " << suma_d << " , Ilosc liczb dodatnich: " << ile_d << endl;
	cout << "Suma liczb ujemnych : " << suma_u << " , Ilosc liczb ujemnych: " << ile_u << endl;
	
	cout << "Zadanie 4: " << endl;
	cout << "Podaj n: ", cin >> n;
	
	if (n > 0) {
		for (int i = 0; i < n; i++) {
			cout << "Podaj liczbe: ", cin >> liczba;
			if (liczba % 2 == 0) suma += liczba;
		}
		cout << " Suma liczb parzystych: " << suma << endl;

	}
	else cout << "n nie moze byc <\n";

	
	cout << "Zadanie 5: " << endl;
	srand(time(NULL));
	cout << "Podaj n: ", cin >> n;

	if (n > 0) {
		for (int i = 0; i < n; i++) {
			liczba = rand() % 56 - 10;
			cout << liczba << " ";
			if (liczba % 2 == 0) suma += liczba;
		}
		cout << " Suma liczb parzystych: " << suma << endl;

	}
	else cout << "n nie moze byc <\n";
	
		//rand() % 11 - 5; // -5 , 5
		//rand() % 9 + 1; // 1,10
		//rand() % 11; // 0;10
	}



