if __name__ == '__main__':
    n = int(input())
    arr = list(map(int, input().split()))
    print(sorted(set(arr))[-2])

# i = int(input())
# lis = list(map(int,raw_input().strip().split()))[:i]
# z = max(lis)
# while max(lis) == z:
#     lis.remove(max(lis))
# print max(lis)

# n = int(input())
# arr = list(map(int, input().split()))
# print(max([x for x in arr if x!=max(arr)]))

# n = int(input())
# arr = list(map(int, input().split()))   
# new = [x for x in arr if x < max(arr)]
# print(max(new))

# n = int(raw_input())
# arr = map(int, raw_input().split())
# lst = []
# for i in arr:
#     if i<max(arr):
#         lst.append(i)
# print max(lst)

# n = int(input())
# arr = map(int, input().split())
# print(sorted(set(arr),reverse=True)[1])

# n = int(input())
# collection = set(map(int, input().split()))
# collection.remove(max(collection))
# print(max(collection))

# n = int(raw_input())
# arr = map(int, raw_input().split())
# myList = list(set(arr))
# myList.sort()
# myList.pop()
# print myList.pop()