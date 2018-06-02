if __name__ == '__main__':
	A = set(map(int,input().split()))
	ans = True
	for _ in range(int(input())):
		B = set(map(int,input().split()))
		ans = ans & (B.issubset(A) and (A != B))
	print(ans)

# a = set(input().split())
# print(all(a > set(input().split()) for _ in range(int(input()))))

# A = set(input().split())
# for _ in range(int(input())):
#     if not A.issuperset(set(input().split())):
#         print(False)
#         break
# else:
#     print(True)

# a = set(map(int, input().split()))
# for x in range(int(input())):
#     b = set(map(int, input().split()))
#     if len(b.intersection(a))<len(b):
#         print("False")
#         exit()
# print("True")
