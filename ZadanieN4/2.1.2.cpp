#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	float gal, fut;
	cout << "Введите число галлонов: ";
	cin >> gal;
	fut = gal / 7.481;
	cout << "Объём в кубических футах равен: " << fut << endl;
	return 0;
}
