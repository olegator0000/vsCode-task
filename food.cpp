#include <iostream>

int main() {
    int прийомівЇжіВДень, тривалістьПрийому, середнійТермінЖиття;

    std::cout << "Введіть кількість прийомів їжі на день: ";
    std::cin >> прийомівЇжіВДень;

    std::cout << "Введіть тривалість кожного прийому (у хвилинах): ";
    std::cin >> тривалістьПрийому;

    std::cout << "Введіть середній термін життя (у роках): ";
    std::cin >> середнійТермінЖиття;

    int загальнийЧасПрийому = прийомівЇжіВДень * тривалістьПрийому * 365 * середнійТермінЖиття;

    std::cout << "Загальний час, витрачений на прийом їжі за життя: " << загальнийЧасПрийому << " хвилин\n";
    std::cout << "Загальний час, витрачений на прийом їжі за життя: " << загальнийЧасПрийому / 60 << " годин\n";

    return 0;
}
