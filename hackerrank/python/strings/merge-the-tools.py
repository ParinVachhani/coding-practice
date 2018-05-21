def merge_the_tools(s, k):
    t = [s[i:i+k] for i in range(0,len(s)-k+1,k)]
    for i in range(len(t)):
        temp = ''
        for c in t[i]:
            if c not in temp:
                temp += c
        t[i] = temp
    print('\n'.join(t))

if __name__ == '__main__':
    string, k = input(), int(input())
    merge_the_tools(string, k)

# for part in zip(*[iter(S)] * N):
#     d = dict()
#     print(''.join([ d.setdefault(c, c) for c in part if c not in d ]))

# from collections import OrderedDict
# def merge_the_tools(string, k):
#     for x in range(0,len(string),k):     
#         print(''.join(list(OrderedDict.fromkeys(string[x:x+k]))))

# print('\n'.join([''.join(sorted(set(string[i:i+k]), key=string[i:i+k].index)) for i in range(0, len(string), k)]))

# from collections import OrderedDict
# s = input()
# k = int(input())
# z = zip(*[iter(s)]*k)
# m = map(OrderedDict.fromkeys, z)
# u = map("".join, m)
# print("\n".join(u))

# s=str(input())
# k=int(input())
# l=int(len(s)/k)
# for x in range(l):
#     foo=((s[x*k : (x+1)*k]))
#     print(''.join([j for i,j in enumerate(foo) if j not in foo[:i]]))
