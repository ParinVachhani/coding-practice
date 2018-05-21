if __name__ == '__main__':
    s = input()
    alphanum = False
    for i in s:
        if i.isalnum():
            alphanum = True
            break
    print(alphanum)
    alpha = False
    for i in s:
        if i.isalpha():
            alpha = True
            break
    print(alpha)
    digit = False
    for i in s:
        if i.isdigit():
            digit = True
            break
    print(digit)
    lower = False
    for i in s:
        if i.islower():
            lower = True
            break
    print(lower)
    upper = False
    for i in s:
        if i.isupper():
            upper = True
            break
    print(upper)


# print any(c.isalnum()  for c in str)
# print any(c.isalpha() for c in str)
# print any(c.isdigit() for c in str)
# print any(c.islower() for c in str)
# print any(c.isupper() for c in str)
# for test in ('isalnum', 'isalpha', 'isdigit', 'islower', 'isupper'):
#         any(eval("c." + test + "()") for c in s)

# for method in [str.isalnum, str.isalpha, str.isdigit, str.islower, str.isupper]:
#     print any(method(c) for c in s)

# t = type(s)
# for method in [t.isalnum, t.isalpha, t.isdigit, t.islower, t.isupper]:
#     print any(method(c) for c in s)

# for f in ['isalnum', 'isalpha', 'isdigit', 'islower', 'isupper']:
#     print(any(getattr(c, f)() for c in s))

# s = input()
# print(bool(len([ch for ch in s if ch.isalnum()])))
# print(bool(len([ch for ch in s if ch.isalpha()])))
# print(bool(len([ch for ch in s if ch.isdigit()])))
# print(bool(len([ch for ch in s if ch.islower()])))
# print(bool(len([ch for ch in s if ch.isupper()])))
