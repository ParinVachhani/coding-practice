if __name__ == '__main__':
	n = int(input())
	s = set(map(int, input().split()))
	N = int(input())
	for _ in range(N):
		line = input().split()
		if line[0] == "pop" and len(s) > 0:
			s.pop()
		elif line[0] == "discard":
			s.discard(int(line[1]))
		elif line[0] == "remove" and len(s) > 0:
			s.remove(int(line[1]))
	print(sum(s))

# n = int(input())
# s = set(map(int, input().split())) 
# for i in range(int(input())):
#     eval('s.{0}({1})'.format(*input().split()+['']))

# print(sum(s))

# n = int(input())
# s = set(map(int, input().split())) 
# t = int(input())

# for i in range(t):
#     c, *args = map(str,input().split())
#     getattr(s,c) (*(int(x) for x in args))

# print (sum(s))