#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "rus");

    cout << "Введите первое число: ";
    int firstNumber;
    cin >> firstNumber;
    cout << endl;

    cout << "Введите второе число: ";
    int secondNumber;
    cin >> secondNumber;
    cout << endl;

    cout << "-----Проверяем----" << endl;

    int res;

    if (firstNumber > secondNumber)
    {
        res = secondNumber;
    }
    else
    {
        res = firstNumber;
    }

    cout << "Наименьшее число: " << res;
}

