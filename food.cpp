#include <iostream>

int main() {
    int eatAday, termEat, midTermLife;

    std::cout << "Введіть кількість прийомів їжі на день: ";
    std::cin >> eatAday;

    std::cout << "Введіть тривалість кожного прийому (у хвилинах): ";
    std::cin >> termEat;

    std::cout << "Введіть середній термін життя (у роках): ";
    std::cin >> midTermLife;

    int gbTimeEating = eatAday * termEat * 365 * midTermLife;

    std::cout << "Загальний час, витрачений на прийом їжі за життя: " << gbTimeEating << " хвилин\n";
    std::cout << "Загальний час, витрачений на прийом їжі за життя: " << gbTimeEating / 60 << " годин\n";

    return 0;
}
