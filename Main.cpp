#include <iostream>
using namespace std;

int main() {

	setlocale(LC_ALL, "Turkish");

	cout << "* * * * * * * * * * * * *" << endl;
	cout << "*                       *" << endl;
	cout << "*                       *" << endl;
	cout << "*     Bur� Hesaplama    *" << endl;
	cout << "*     by. Staticius     *" << endl;
	cout << "*                       *" << endl;
	cout << "*                       *" << endl;
	cout << "* * * * * * * * * * * * *" << endl;

	int dogumAyi, dogumGunu;
	string burc;
	string errSt = "Hatal� ��lem !";

	cout << "Do�du�unuz ay� ve g�n� giriniz." << endl;

	cin >> dogumAyi >> dogumGunu;

	switch (dogumAyi)
	{
	case 1:
		if (dogumGunu >= 1 && dogumGunu <=31)
		{

			if (dogumGunu <= 21)
			{
				burc = "O�lak";
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
				burc = "Bal�k";
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
				burc = "Bal�k";
				cout << "Burcunuz: " << burc << endl;

			}
			else
			{
				burc = "Ko�";
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