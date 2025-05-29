#include "SolverMethods.h"

int main() {
    double a = .7, b = 1.9, epsilon = 1e-6;

    BisectionMethod bisection(a, b, epsilon);
    double rootBisection = bisection.solve();
    if (!std::isnan(rootBisection)) {
        std::cout << "Bisection root: " << rootBisection << "\n";
    }

    double initialGuess = 1.5;
    NewtonMethod newton(initialGuess, epsilon);
    double rootNewton = newton.solve();
    if (!std::isnan(rootNewton)) {
        std::cout << "Newton-Raphson root: " << rootNewton << "\n";
    }

    return 0;
}