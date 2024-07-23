#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "rus");

    cout << "Введите число очков опыта: ";
    int number;
    cin >> number;
    cout << endl;

    cout << "-----Считаем----" << endl;

    if (number < 2500)
    {
        cout << "Ваш уровень: 1";
    }
    else if (number < 5000)
    {
        cout << "Ваш уровень: 2";
    }
    else if (number >= 5000)
    {
        cout << "Ваш уровень: 3";
    }
}