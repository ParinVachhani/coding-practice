from collections import deque

if __name__ == '__main__':
	d = deque()
	for _ in range(int(input())):
		inp = input().split()
		getattr(d, inp[0])(*[inp[1]] if len(inp) > 1 else [])
	    # method, *n = input().split()
	    # getattr(d, method)(*n)		
	print(*[item for item in d])
