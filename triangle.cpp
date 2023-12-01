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

#include <iostream>
#include <cmath>
//3 задача (18)
int main() {
    double a;
    std::cout << "Enter the value of a: ";
    std::cin >> a;
    double z1 = ((a + 2) / (sqrt(2 * a) - a / (sqrt(2 * a) + 2)
     + 2 / (a - sqrt(2 * a))))
      * (sqrt(a) - sqrt(2)) / (a + 2);

    double z2 = 1 / (sqrt(a) + sqrt(2));
    std::cout << "z1 = " << z1 << std::endl;
    std::cout << "z2 = " << z2 << std::endl;

    return 0;
}
//4 задача (24)
#include <iostream>
#include <cmath>

int main() {
    double b = 7.1;
    double t = 2.0;
    double a = sqrt(b + t * t);
    double x = cos(b) * cos(b) + sin(a) * sin(a);
    double y = x * x + cbrt(fabs(x));
    std::cout << "a = " << a << std::endl;
    std::cout << "x = " << x << std::endl;
    std::cout << "y = " << y << std::endl;

    return 0;
}
//5 задача (14)
#include <iostream>
#include <cmath>

int main() {
    double m, y;
    std::cout << "Enter the value of m: ";
    std::cin >> m;
    std::cout << "Enter the value of y in radians: ";
    std::cin >> y;
    double result = (m * m + 2.8 * m + 0.355) / (cos(2 * y) + 3.6);
    std::cout << "Result: " << result << std::endl;

    return 0;
}
