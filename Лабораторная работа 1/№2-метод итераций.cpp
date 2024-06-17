#include <iostream>
#include <cmath>

double g(double x) {
    return 1 / exp(x) + 1;
}

double simpleIteration(double x0, double eps) {
    double x = x0;
    double next_x;
    int iter = 0;

    do {
        next_x = g(x);
        iter++;
        x = next_x;
    } while (std::abs(next_x - x) >= eps);

    return x;
}

int main() {
    double x0 = 2.0;
    double eps = 1e-6;

    double root = simpleIteration(x0, eps);

    std::cout << "Root: " << root << std::endl;

    return 0;
}

