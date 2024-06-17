def g(x):
    return math.exp(-x)

def fixed_point_iteration(x0, eps):
    x1 = g(x0)
    while abs(x1 - x0) > eps:
        x0 = x1
        x1 = g(x0)
    return x1

x0 = 1.5
eps = 1e-6

root = fixed_point_iteration(x0, eps)
print(f"Root found at x = {root}")
