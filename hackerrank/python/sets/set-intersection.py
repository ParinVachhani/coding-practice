if __name__ == '__main__':
	n = int(input())
	e = set(map(int,input().split()))
	b = int(input())
	f = set(map(int,input().split()))
	print(len(e.intersection(f)))

# num1, st1, num2, st2 = (set(raw_input().split()) for i in range(4))
# print len(st1.intersection(st2))

# print(input()==0 or len(set(input().split())&(input()==0 or set(input().split()))))