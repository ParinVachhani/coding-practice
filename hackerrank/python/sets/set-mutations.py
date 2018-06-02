if __name__ == '__main__':
	a = int(input())
	A = set(map(int,input().split()))
	for _ in range(int(input())):
		op, l = input().split()
		B = set(map(int,input().split()))
		getattr(A,op)(B)
	print(sum(A))

# (_, A) = (
#     raw_input(),
#     set(map(int, raw_input().split()))
# )
# for _ in xrange(input()):
#     (command, newSet) = (
#         raw_input().split()[0],
#         set(map(int, raw_input().split()))
#     )
#     # Cool trick. Since our commands are method names, just
#     # execute the method on A with our new set as its argument.
#     getattr(A, command)(newSet)
# print str(sum(A))

# input()
# L = set(input().split())
# for _ in range(int(input())):
#     command, *args = input().split()
#     getattr(L, command)(set(input().split())) 
# print(sum(map(int, L)))

# _, s1 = (input(),set(input().split()))
# for _ in range(int(input())):
#     eval('s1.{0}({1})'.format(input().split()[0], input().split()))
# print(sum(map(int, s1)))

# S = input() == 0 or set(input().split())
# print([getattr(S, input().split()[0])(input().split()) for _ in range(int(input()))] == [] or sum(map(int, S)))

# _, a = input(), set(input().split())
# for _ in range(int(input())):
#     op, *nums = input().split()[0], input().split()
#     getattr(a, op)(*nums)
# print(sum(map(int, a)))