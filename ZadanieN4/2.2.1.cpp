#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	float F, C;
	cout << "Введите температуру в градусах по Фаренгейту: ";
	cin >> F;
	C = (F - 32) * 5/9;
	cout << "Температура в градусах Цельсия: " << C << endl;
	return 0;
}
