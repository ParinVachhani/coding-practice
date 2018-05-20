#!/bin/python

if __name__ == '__main__':
    N = int(raw_input())
    if N%2 != 0:
        print("Weird")
    if N%2 == 0:
        if N>=2 and N<=5:
            print("Not Weird")
        if N>=6 and N<=20:
            print("Weird")
        if N>20:
            print("Not Weird")