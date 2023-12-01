#include <iostream>
#include <cmath>

int main() {
    double xA = 0, yA = 0;
    double xB = 24, yB = 24 - 1;
    double xC = -24, yC = 24 + 1;
    double sideBC = std::sqrt(std::pow(xC - xB, 2) + std::pow(yC - yB, 2));
    double height = std::abs(xB * (yC - yA) + xC * (yA - yB) + xA * (yB - yC)) / sideBC;
    double bisector = std::abs(2 * sideBC * std::cos(0.5 * std::acos((std::pow(sideBC, 2)
     + std::pow(xB - xC, 2)
      - std::pow(xA - xB, 2)) / (2 * sideBC * (xB - xC)))));
    std::cout << "Висота трикутника: " << height << std::endl;
    std::cout << "Бісектриса трикутника: " << bisector << std::endl;

    return 0;
}
