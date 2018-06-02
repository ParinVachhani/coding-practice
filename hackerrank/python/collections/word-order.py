from collections import OrderedDict
if __name__ == '__main__':
	words = OrderedDict()
	for i in range(int(input())):
	    eachword = input().strip()
	    words[eachword] = words.get(eachword, 0) + 1
	print (len(words))
	print (*words.values())

# from collections import Counter
# words = []
# for _ in range(int(input())):
# 	words.append(input().strip())
# counts = Counter(words)
# print(len(counts))
# for word in words:
#     derp = counts.pop(word, None)
#     if derp == None:
#         continue
#     else:
#         print(derp,sep=' ')

# from collections import Counter, OrderedDict
# class OrderedCounter(Counter, OrderedDict):
#     pass
# d = OrderedCounter(input() for _ in range(int(input())))
# print(len(d))
# print(*d.values())
