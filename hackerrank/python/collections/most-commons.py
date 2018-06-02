from collections import Counter

if __name__ == '__main__':
	chars = Counter(input()).items()
	for char, n in sorted(chars, key=lambda c: (-c[1], c[0]))[:3]:
	    print(char, n)

# from collections import Counter, OrderedDict
# class OrderedCounter(Counter, OrderedDict):
#     pass
# [print(*c) for c in OrderedCounter(sorted(input())).most_common(3)]

# from collections import Counter
# string = sorted(Counter(input()).items(), key= lambda x: (-x[1],x[0]))[:3]
# print("\n".join(x[0]+" "+str(x[1]) for x in string))
