from collections import OrderedDict
if __name__ == '__main__':
	d = OrderedDict()
	for _ in range(int(input())):
	    item, space, quantity = input().rpartition(' ')
	    d[item] = d.get(item, 0) + int(quantity)
	for item, quantity in d.items():
	    print(item, quantity)

# number_ = int(input())
# odict = OrderedDict()
# for i in range(number_):
#     litem = input().split(' ')
#     price = int(litem[-1])
#     item_name = " ".join(litem[:-1])
#     if odict.get(item_name):
#         odict[item_name] += price
#     else:
#         odict[item_name] = price
# for i,v in odict.items():
#     print(i,v)
