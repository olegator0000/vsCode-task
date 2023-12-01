#include <iostream>

int main() {
    int hrSmokeDay, midTermLife;

    std::cout << "Введіть кількість годин куріння на день: ";
    std::cin >> hrSmokeDay;

    std::cout << "Введіть середній термін життя (у роках): ";
    std::cin >> midTermLife;

    int gbTimeSmoking = hrSmokeDay * 365 * midTermLife;

    std::cout << "Загальний час, витрачений на куріння за життя: " << gbTimeSmoking << " годин\n";
    std::cout << "Загальний час, витрачений на куріння за життя: " << gbTimeSmoking / 24 << " днів\n";
    std::cout << "Загальний час, витрачений на куріння за життя: " << gbTimeSmoking / (24 * 365) << " років\n";

    return 0;
}
