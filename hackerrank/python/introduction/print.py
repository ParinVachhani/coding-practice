from __future__ import print_function
import sys

if __name__ == '__main__':
    # n = int(raw_input())
    # values = []
    # for x in range(n):
    #     values.insert(x)
    # print(*values, sep='', end='\n', file=sys.stdout)
    # for i in range(1, n+1):
    # 	print(i, end="")
    print(*range(1, int(input())+1), sep='')
