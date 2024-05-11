#!/usr/bin/python3
from add_0 import add


def main():
    a = 1
    b = 2
    # Ensure to use spaces instead of tabs for indentation
    print("{} + {} = {}".format(a, b, add(a, b)))


# Two blank lines before defining another function or the execution guard
if __name__ == "__main__":
    main()
