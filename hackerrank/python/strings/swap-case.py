def swap_case(s):
    return s.swapcase()

if __name__ == '__main__':
    s = input()
    result = swap_case(s)
    print(result)

# print(*map(lambda ch : ch.lower() if ch.isupper() else ch.upper(), input()), sep="")

# s=raw_input()
# x=[]
# for i in s:
# 	if i.isupper():
# 		i=i.lower()
# 		x.append(i)
# 	else:
# 		i=i.upper()
# 		x.append(i)
# 		str1=''.join(x)
# print str1

# def swap_case(s):
#     result = ""
#     for letter in s:
#         if letter == letter.upper():
#             result += letter.lower()
#         else:
#             result += letter.upper()
#     return result

# def swap_case(s):
#     string='';
#     for i in s:
#         o=ord(i)
#         if (123>o>96):string+=chr(o-32)
#         elif (91>o>64):string+=chr(o+32)
#         else:string+=i
#     return string

# print(''.join([i.lower() if i.isupper() else i.upper() for i in raw_input()]))