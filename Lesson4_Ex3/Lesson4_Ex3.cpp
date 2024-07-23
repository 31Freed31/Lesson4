#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "rus");

    cout << "Введите число: ";
    int number;
    cin >> number;
    cout << endl;

    cout << "-----Проверяем----" << endl;

    if (number % 2 == 0)
    {
        cout << "Число " << number << " - четное";
    }
    else
    {
        cout << "Число " << number << " - нечетное";
    }
}