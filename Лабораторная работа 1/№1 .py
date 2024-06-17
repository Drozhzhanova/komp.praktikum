import cmath

z1 = 1 + 1j
z2 = 3 - 1j
z3 = -1 + 1j

# Сумма, разность, произведение, частное
summ = z1 + z2
diff = z1 - z2
prod = z1 * z2
quot = z1 / z2

# Четвертая степень
z3_pow4 = z3 ** 4

# Корень третьей степени
z3_cube_root = cmath.exp(cmath.log(z3) / 3)

print("Summ:", summ)
print("Difference:", diff)
print("Product:", prod)
print("Quotient:", quot)
print("Fourth power of z3:", z3_pow4)
print("Cube root of z3:", z3_cube_root)
