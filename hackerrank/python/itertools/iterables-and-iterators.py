from itertools import combinations
if __name__ == '__main__':
	N,arr,K = int(input()), input().split(), int(input())
	C = list(combinations(arr, K))
	F = [i for i in C if 'a' in i]
	# F = filter(lambda c: 'a' in c, C)
	print("{0:.3}".format(len(list(F))/len(C)))
