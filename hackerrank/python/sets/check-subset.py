if __name__ == '__main__':
	for _ in range(int(input())):
		a = int(input())
		A = set(map(int,input().split()))
		b = int(input())
		B = set(map(int,input().split()))
		# if len(A-B) == 0:
		# 	print(True)
		# else:
		# 	print(False)
		
		# print(not bool(A.difference(B)))
		
		# print( A.intersection(B) == A)
		
		print(A.issubset(B))

# for _ in range(int(input())):
# x, a, z, b = input(), set(input().split()), input(), set(input().split())
# print(a.issubset(b))

# for i in range(int(input())):
#     input()
#     A = set(input().split())
#     input()
#     B = set(input().split())
#     print(A <= B)
