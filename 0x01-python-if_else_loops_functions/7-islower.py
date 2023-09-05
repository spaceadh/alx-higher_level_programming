#!/usr/bin/python3
def islower(c):
    for i in range(ord("a"), ord("z") + 1):
        if (i == ord(c)):
            return 1
    return 0
