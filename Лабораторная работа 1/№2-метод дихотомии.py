import math

def f(x):
    return math.exp(-x) - math.sqrt(x - 1)

def bisection_method(a, b, eps):
    if f(a) * f(b) > 0:
        print("No root found in this interval")
        return None

    while (b - a) / 2 > eps:
        c = (a + b) / 2
        if f(c) == 0.0:
            return c
        elif f(a) * f(c) < 0:
            b = c
        else:
            a = c

    return (a + b) / 2

a = 1.0
b = 3.0
eps = 1e-6

root = bisection_method(a, b, eps)
if root:
    print(f"Root found at x = {root}")
