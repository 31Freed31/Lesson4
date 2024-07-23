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

    cout << "Введите их сумму: ";
    int res;
    cin >> res;
    cout << endl;

    cout << "-----Проверяем----" << endl;

    if (res == firstNumber + secondNumber)
    {
        cout << "Верно!";
    }
    else
    {
        cout << "Ошибка! Верный результат: " << firstNumber + secondNumber;
    }
}