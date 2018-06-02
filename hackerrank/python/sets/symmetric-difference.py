if __name__ == '__main__':
	M = int(input())
	a = set(map(int,input().split()))
	N = int(input())
	b = set(map(int,input().split()))
	l = list((a.difference(b)).union(b.difference(a)))
	# print ('\n'.join(sorted(l, key=int)))
	l.sort()
	print('\n'.join(str(i) for i in l))

# _ , M = input(), set(map(int,input().split()))
# _ , N = input(), set(map(int,input().split()))
# print(*sorted(M.symmetric_difference(N)),sep='\n')
