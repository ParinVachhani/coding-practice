from collections import Counter

if __name__ == '__main__':
	X, S, N = int(input()), list(map(int,input().split())),int(input())
	C = Counter(S)
	profit = 0
	for _ in range(N):
		size, price = map(int, input().split())
		if C[size]:
			profit += price
			C[size] -= 1
	print(profit)
