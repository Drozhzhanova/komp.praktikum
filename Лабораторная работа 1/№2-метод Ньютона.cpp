#include <iostream>
#include <cmath>

double func(double x) {
    return exp(-x) - sqrt(x - 1);
}

double deriv(double x) {
    return -exp(-x) - 1 / (2 * sqrt(x - 1));
}

double newton(double x0, double eps) {
    double x = x0;
    double next_x;
    int iter = 0;

    do {
        next_x = x - func(x) / deriv(x);
        iter++;
        x = next_x;
    } while (std::abs(func(next_x)) >= eps);

    return next_x;
}

int main() {
    double x0 = 2.0;
    double eps = 1e-6;

    double root = newton(x0, eps);

    std::cout << "Root: " << root << std::endl;

    return 0;
}
