from collections import defaultdict
if __name__ == '__main__':
	n,m = map(int,input().split())
	A = defaultdict(list)
	B = defaultdict(list)
	for i in range(1,n+1):
		A[input().strip()].append(str(i))
	for i in range(1,m+1):
		c = input().strip()
		if c in A:
			print(" ".join(A[c]))
		else:
			print(-1)
