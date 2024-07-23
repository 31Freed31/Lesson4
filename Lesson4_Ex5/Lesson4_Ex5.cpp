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

    if (firstNumber % secondNumber == 0)
    {
        cout << "Да, " << firstNumber << " делится на " << secondNumber << " без остатка!";
    }
    else
    {
        cout << "Нет, " << firstNumber << " не делится на " << secondNumber << " без остатка!";
    }
}