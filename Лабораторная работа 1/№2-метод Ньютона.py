def f_prime(x):
    return -math.exp(-x) - 1 / (2 * math.sqrt(x - 1))

def newton_method(x0, eps):
    x1 = x0 - f(x0) / f_prime(x0)
    
    while abs(x1 - x0) > eps:
        x0 = x1
        x1 = x0 - f(x0) / f_prime(x0)

    return x1

x0 = 1.5
eps = 1e-6

root = newton_method(x0, eps)
print(f"Root found at x = {root}")
