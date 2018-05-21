import string

def print_rangoli(n):
    alpha = string.ascii_lowercase
    L = []
    for i in range(n):
        s = "-".join(alpha[i:n])
        L.append((s[::-1]+s[1:]).center(4*n-3, "-"))
    print('\n'.join(L[:0:-1]+L))

if __name__ == '__main__':
    n = int(input())
    print_rangoli(n)

# def print_rangoli(size):
#     alp = 'abcdefghijklmnopqrstuvwxyz'
#     for i in range(size-1,-size,-1):
#         temp = '-'.join(alp[size-1:abs(i):-1]+alp[abs(i):size])
#         print(temp.center(4*size-3,'-'))

# from string import ascii_lowercase as letters
# def print_rangoli(limit):
#     # your code goes here
#     for i in range(limit-1):
#         print(('-'.join(letters[limit-1:limit-i-1:-1]+letters[ limit-i-1:limit])).center(limit*4-3,'-'))
#     for i in range(limit):
#         print(('-'.join((letters[limit-1 : i:-1])+letters[ i:limit])).center(limit*4-3,'-'))
