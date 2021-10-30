#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    srand(time(NULL));
    bool flag = true;
    int n;
    int random = rand() % 100 + 1;
    int i = 0;
    while (flag == true)
    {
        cout << "Введите число от 1 до 100: ";
        cin >> n;
        if (n > random)
            cout << "Загаданное число меньше!" << endl;
        else
            if (n < random)
                cout << "Загаданное число больше!" << endl;
            else
            {
            cout << "Вы угадали!" << endl;
            flag = false;
            }
        i++;
        if ((flag == true) && (i >= 6))
        {
            cout << "Вы не угадали, было загадано число " << random << endl;
            flag = false;
        }
    }
    return 0;
}
