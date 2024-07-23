#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "rus");

    int dayOfWeek;
    cout << "Введите день недели (от 1 до 7): ";
    cin >> dayOfWeek;

    string commonMenu = "Морс";

    string menu;
    string dayName;

    switch (dayOfWeek) {
    case 1:
        dayName = "понедельник";
        menu = "Борщ\nСалат \"Греческий\"\nКотлета с картофельным пюре\n" + commonMenu;
        break;
    case 2:
        dayName = "вторник";
        menu = "Харчо\nСалат \"Оливье\"\nБаварские колбаски с капустой\n" + commonMenu;
        break;
    case 3:
        dayName = "среда";
        menu = "Солянка\nСалат \"Весенний\"\nГовяжий стейк с овощами\n" + commonMenu;
        break;
    case 4:
        dayName = "четверг";
        menu = "Гороховый суп\nСалат \"Цезарь\" с креветками\nКуриная ножка с пюре\n" + commonMenu;
        break;
    case 5:
        dayName = "пятница";
        menu = "Щи\nСалат \"Мимоза\"\nРыбное филе с рисом\n" + commonMenu;
        break;
    case 6:
        dayName = "суббота";
        menu = "Куриный бульон\nСалат \"Сельдь под шубой\"\nПлов\n" + commonMenu;
        break;
    case 7:
        dayName = "воскресенье";
        menu = "Том Ям\nСалат \"Крабовый\"\nШашлык с овощами\n" + commonMenu;
        break;
    default:
        cout << "Некорректный ввод. Пожалуйста, введите число от 1 до 7." << endl;
        return 1;
    }

    cout << "Меню сегодня (" << dayName << "):" << endl;
    cout << menu << endl;

    return 0;
}
