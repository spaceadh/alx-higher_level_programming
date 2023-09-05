#!/usr/bin/python3
i = 122
while i >= 97:
    check = 0
    if (i % 2 != 0):
        i -= 32
        check = 1
    print("{:s}".format(chr(i)), end="")
    if (check):
        i += 32
    i -= 1
