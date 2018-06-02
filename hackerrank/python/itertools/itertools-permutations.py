from itertools import permutations
if __name__ == '__main__':
	s,n = input().split()
	print(*[''.join(i) for i in permutations(sorted(s),int(n))],sep='\n')

# word, num = input().split(" ")
# permutations = list(permutations(word, int(num)))
# permutations.sort()
# for i in permutations:
#     print("".join(i))
