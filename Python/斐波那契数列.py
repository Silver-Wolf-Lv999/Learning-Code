#!/usr/bin/python

def fac(n):
    if n == 1 or n == 2:
        return 1
    else:
        return fac(n - 1) + fac(n - 2)

if __name__ == "__main__":
    number = int(input())
    n = fac(number)
    print(n)
