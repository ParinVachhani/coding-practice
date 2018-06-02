from itertools import product
if __name__ == '__main__':
	a, b = map(int,input().split()), map(int,input().split())
	print(*product(a, b))
