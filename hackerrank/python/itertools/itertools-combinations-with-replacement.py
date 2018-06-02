from itertools import combinations_with_replacement
if __name__ == '__main__':
	s,n = input().split()
	print(*[''.join(i) for i in combinations_with_replacement(sorted(s),int(n))],sep='\n')
