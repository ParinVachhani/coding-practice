from itertools import groupby
if __name__ == '__main__':
	print(*[(len(list(c)), int(k)) for k, c in groupby(input())])
