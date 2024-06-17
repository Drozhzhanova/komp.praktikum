def chord_method(a, b, eps):
    if f(a) * f(b) > 0:
        print("No root found in this interval")
        return None

    while abs(f(b)) > eps:
        c = (a*f(b) - b*f(a)) / (f(b) - f(a))
        if f(c) == 0.0:
            return c
        elif f(a) * f(c) < 0:
            b = c
        else:
            a = c

    return c

a = 1.0
b = 3.0
eps = 1e-6

root = chord_method(a, b, eps)
if root:
    print(f"Root found at x = {root}")
