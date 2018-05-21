import textwrap

def wrap(string, max_width):
    return textwrap.fill(string, width=max_width)

if __name__ == '__main__':
    string, max_width = input(), int(input())
    result = wrap(string, max_width)
    print(result)

# s=raw_input().strip()
# w=int(raw_input())
# for i in range(0,len(s)+1,w):
#     print(s[i:w+i])

# a, b = raw_input(), int(raw_input())
# for i in range(0,len(a),b):
# 	print a[i:i+b]

# import textwrap
# s = input()
# w = int(input())
# l = " ".join(textwrap.wrap(s,w))
# print(textwrap.fill(l,w))

# def wrap(string, max_width):
#     return "\n".join([string[i:i+max_width] for i in range(0, len(string), max_width)])
    