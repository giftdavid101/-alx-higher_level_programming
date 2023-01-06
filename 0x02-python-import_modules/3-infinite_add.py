#!/usr/bin/python3
if __name__ == "__main__":
    import sys

    count = 0
    sys.argv.pop(0)
    for i in range(len(sys.argv)):
        count += int(sys.argv[i])
    print(count)
