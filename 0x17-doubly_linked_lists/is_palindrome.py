#!/usr/bin/python3

max = 0
for i in range(100, 1000):
    for j in range(i, 1000):
        product = i*j
        if (str(product) == str(product)[::-1] and product > max):
            max = product

print(max)
