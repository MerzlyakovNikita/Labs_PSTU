#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int x;
	int a, b, c, t;
	cout << "Введите трёхзначное число: ";
	cin >> x;
	a = x % 10;
	t = x / 10;
	b = t % 10;
	c = t / 10;
	bool flag1 = x < 100 || x > 999;
	bool flag2 = a == b || a == c || b == c;
	bool flag = flag1 || flag2;
	while (flag)
	{
		cout << "Число не удовлетворяет условию, введите новое: ";
		cin >> x;
		a = x % 10;
		t = x / 10;
		b = t % 10;
		c = t / 10;
		flag1 = x < 100 || x > 999;
		flag2 = a == b || a == c || b == c;
		flag = flag1 || flag2;
	}
	cout << a << b << c << endl;
	cout << a << c << b << endl;
	cout << b << a << c << endl;
	cout << b << c << a << endl;
	cout << c << a << b << endl;
	cout << c << b << a << endl;
	if ((a > b) && (a > c))
	{
		cout << "\nНаибольшее из этих чисел : " << a;
		if (b > c)
			cout << b << c;
		else
			cout << c << b;
	}
	else
		if ((b > a) && (b > c))
		{
			cout << "\nНаибольшее из этих чисел : " << b;
			if (a > c)
				cout << a << c;
			else
				cout << c << a;
		}
		else
			if ((c > b) && (c > a))
			{
				cout << "\nНаибольшее из этих чисел : " << c;
				if (b > a)
					cout << b << a;
				else
					cout << a << b;
			}
	return 0;
}
