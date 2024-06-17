#include <iostream>
#include <cmath>

double func(double x) {
    return exp(-x) - sqrt(x - 1);
}

double chord(double a, double b, double eps) {
    double c;
    do {
        c = (a * func(b) - b * func(a)) / (func(b) - func(a));

        if (func(c) == 0.0)
            break;
        else if (func(c) * func(a) < 0)
            b = c;
        else
            a = c;
    } while (std::abs(func(c)) >= eps);

    return c;
}

int main() {
    double a = 1.0, b = 3.0;
    double eps = 1e-6;

    double root = chord(a, b, eps);

    std::cout << "Root: " << root << std::endl;

    return 0;
}
