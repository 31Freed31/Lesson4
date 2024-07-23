#include <iostream>

using namespace std;

int main() {
    setlocale(LC_CTYPE, "rus");

    int totalMen, totalBarbers;
    cout << "Введите количество мужчин в городе: ";
    cin >> totalMen;
    cout << "Введите количество барберов в городе: ";
    cin >> totalBarbers;

    int menPerDay = totalMen / 30; 
    int barbersCapacity = totalBarbers * 8; 

    if (barbersCapacity >= menPerDay) {
        cout << "Барберов достаточно, чтобы обслужить всех мужчин." << endl;
    }
    else {
        int additionalBarbersNeeded = (menPerDay + 7) / 8 - totalBarbers; 
        cout << "Недостаточно барберов. Нужно дополнительно: " << additionalBarbersNeeded << endl;
    }

    return 0;
}