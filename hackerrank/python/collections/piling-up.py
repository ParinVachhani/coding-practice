from collections import deque

if __name__ == '__main__':
	for _ in range(int(input())):
		n, sidelengths = int(input()), map(int,input().split())
		d = deque(sidelengths)
		last = 2**31
		ans = True
		while d:
			if d[-1] > d[0]:
				if d[-1] <= last:
					last = d[-1]
					d.pop()
				else:
					ans = False
					break
			else:
				if d[0] <= last:
					last = d[0]
					d.popleft()
				else:
					ans = False
					break
		print('Yes' if ans else 'No')

# for t in range(input()):
#     input()
#     lst = map(int, raw_input().split())
#     l = len(lst)
#     i = 0
#     while i < l - 1 and lst[i] >= lst[i+1]:
#         i += 1
#     while i < l - 1 and lst[i] <= lst[i+1]:
#         i += 1
#     print "Yes" if i == l - 1 else "No"

# from collections import deque
# for _ in range(int(input())):  
#     _, queue =input(), deque(map(int, input().split()))
    
#     for cube in reversed(sorted(queue)):
#         if queue[-1] == cube: queue.pop()
#         elif queue[0] == cube: queue.popleft()
#         else:
#             print('No')
#             break
#     else: print('Yes')

# from collections import deque
# T = int(input())
# for _ in range(T):
#     stackable = True
#     n = int(input())
#     sideLengths = deque(map(int, input().split()))
#     while len(sideLengths) > 1:
#         if sideLengths[0] >= sideLengths[1]:
#             sideLengths.popleft()
#         elif sideLengths[-1] >= sideLengths[-2]:
#             sideLengths.pop()
#         else:
#             stackable = False
#             break
#     print("Yes" if stackable else "No")