#!/usr/bin/python3
import random
number = random.randint(-10000, 10000)
print(f"Last digit of {number} is", end=" ")
last = number % 10
if number < 0:
    last = int(str(number)[-1])
    last = -abs(last)

print(f"{last} and is", end=" ")
if last == 0:
    print("0")
elif last < 6:
    print("less than 6 and not 0")
elif last > 5:
    print("greater than 5")
