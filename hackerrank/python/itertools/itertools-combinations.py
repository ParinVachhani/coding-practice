from itertools import combinations
if __name__ == '__main__':
	s,n = input().split()
	for l in range(1,int(n)+1):
		print(*[''.join(i) for i in combinations(sorted(s),int(l))],sep='\n')

# a,b = input().split()
# print(*[''.join(j) for i in range(1,int(b)+1) for j in combinations(sorted(a),i)],sep='\n')
