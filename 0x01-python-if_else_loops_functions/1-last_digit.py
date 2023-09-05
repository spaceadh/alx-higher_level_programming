#!/usr/bin/python3
import random
number = random.randint(-10000, 10000)
n = number
check_sig = 0
if (n < 0):
    n *= -1
    check_sig = 1
lastd = n % 10
if (check_sig):
    lastd *= -1
    n *= -1
if (lastd > 5):
    print("Last digit of %d is %d and is greater than 5" % (n, lastd))
elif (lastd == 0):
    print("Last digit of %d is %d and is 0" % (n, lastd))
elif (lastd < 6 and lastd != 0):
    print(f"Last digit of {n:d} is {lastd:d} and is less than 6 and not 0")
