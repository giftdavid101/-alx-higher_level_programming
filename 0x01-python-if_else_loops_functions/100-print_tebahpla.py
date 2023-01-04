#!/usr/bin/python3
state = 0
for i in range(122, 96, -1):
    if state == 0:
        print("{}".format(chr(i)), end="")
        state = 1
    else:
        state = 0
        print("{}".format(chr((ord(chr(i)) - ord('a')) + ord('A'))), end="")
