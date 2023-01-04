#!/usr/bin/python3
def remove_char_at(str, n):
    copy = ""
    i = 0

    while i < len(str):
        if i != n:
            copy += str[i]
        i = i + 1
    return(copy)
