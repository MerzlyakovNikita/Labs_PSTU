#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	char a, b, c, d, e;
	cout << "Введите 5 символов: ";
	cin >> a >> b >> c >> d >> e;
	cout << e << d << c << b << a << endl;
	return 0;
}
