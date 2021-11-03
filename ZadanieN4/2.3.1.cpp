#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int a, b;
	cout << "Введите 2 числа через пробел: ";
	cin >> a >> b;
	cout << "a*b = " << a * b << endl;
	return 0;
}
