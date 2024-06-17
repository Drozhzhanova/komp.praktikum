#include <iostream>
#include <cmath>

double func(double x) {
    return exp(-x) - sqrt(x - 1);
}

double dichotomy(double a, double b, double eps) {
    if (func(a) * func(b) >= 0) {
        std::cout << "Invalid interval";
        return 0;
    }

    double c;
    while ((b - a) >= eps) {
        c = (a + b) / 2;

        if (func(c) == 0.0)
            break;
        else if (func(c) * func(a) < 0)
            b = c;
        else
            a = c;
    }
    return c;
}

int main() {
    double a = 1.0, b = 3.0;
    double eps = 1e-6;

    double root = dichotomy(a, b, eps);

    std::cout << "Root: " << root << std::endl;

    return 0;
}

