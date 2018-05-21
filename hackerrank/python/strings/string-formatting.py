def print_formatted(n):
    bit_len = len(bin(n).lstrip('0b'))
    for i in range(1,n+1):
        values = [i,oct(i).lstrip('0o'),hex(i).lstrip('0x'),bin(i).lstrip('0b')]
        values = [str(j).upper().rjust(bit_len,' ') for j in values]
        print(' '.join(values))

if __name__ == '__main__':
    n = int(input())
    print_formatted(n)

# n = int(raw_input())
# width = len("{0:b}".format(n))
# for i in xrange(1,n+1):
#   print "{0:{width}d} {0:{width}o} {0:{width}X} {0:{width}b}".format(i, width=width)