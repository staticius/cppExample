#include <iostream>
using namespace std;

int main() {

	setlocale(LC_ALL, "Turkish");

	cout << "* * * * * * * * * * * * *" << endl;
	cout << "*                       *" << endl;
	cout << "*                       *" << endl;
	cout << "*     Burç Hesaplama    *" << endl;
	cout << "*     by. Staticius     *" << endl;
	cout << "*                       *" << endl;
	cout << "*                       *" << endl;
	cout << "* * * * * * * * * * * * *" << endl;

	int dogumAyi, dogumGunu;
	string burc;
	string errSt = "Hatalý Ýþlem !";

	cout << "Doðduðunuz ayý ve günü giriniz." << endl;

	cin >> dogumAyi >> dogumGunu;

	switch (dogumAyi)
	{
	case 1:
		if (dogumGunu >= 1 && dogumGunu <=31)
		{

			if (dogumGunu <= 21)
			{
				burc = "Oðlak";
				cout << "Burcunuz: " << burc << endl;
			}
			else
			{
				burc = "Kova";
				cout << "Burcunuz: " << burc << endl;
			}

		}
		else
		{
			cout << errSt << endl;
		}
		break;

	case 2:
		if (dogumGunu >= 1 && dogumGunu <= 29)
		{

			if (dogumGunu <= 19)
			{
				burc = "Kova";
				cout << "Burcunuz: " << burc << endl;

			}
			else
			{
				burc = "Balýk";
				cout << "Burcunuz: " << burc << endl;

			}

		}
		else
		{
			cout << errSt << endl;
		}
		break;
	case 3:
		if (dogumGunu >= 1 && dogumGunu <= 31)
		{

			if (dogumGunu <= 20)
			{
				burc = "Balýk";
				cout << "Burcunuz: " << burc << endl;

			}
			else
			{
				burc = "Koç";
				cout << "Burcunuz: " << burc << endl;

			}

		}
		else
		{
			cout << errSt << endl;
		}
		break;

	case 4:
	case 5:
	case 6:
	case 7:
	case 8:
	case 9:
	case 10:
	case 11:
	case 12:

	default:
		break;
	}


	return 0;
}