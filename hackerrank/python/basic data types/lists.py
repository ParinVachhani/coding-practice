if __name__ == '__main__':
    N = int(input())
    values = []
    for x in range(N):
        args = input().strip().split(' ')
        cmd = args[0]
        if cmd == 'insert':
            values.insert(int(args[1]),int(args[2]))
        elif cmd == 'print':
            print(values)
        elif cmd == 'remove':
            values.remove(int(args[1]))
        elif cmd == 'append':
            values.append(int(args[1]))
        elif cmd == 'sort':
            values.sort()
        elif cmd == 'pop':
            values.pop()
        elif cmd == 'reverse':
            values.reverse()

# Different methods given below

# l = []
# for _ in range(int(raw_input())):
#     line = raw_input().strip()
#     if line == "print":
#         print l
#         continue
#     parts = line.split()
#     getattr(l, parts[0])(*(map(int, parts[1:])))
     

# n = int(input())
# operations = [input().strip() for _ in range(n)]
# list_ = []
# commands = {
#     'insert': lambda idx, ele: list_.insert(int(idx), int(ele)),
#     'print': lambda: print(list_),
#     'remove': lambda ele: list_.remove(int(ele)),
#     'append': lambda ele: list_.append(int(ele)),
#     'sort': lambda: list_.sort(),
#     'pop': lambda: list_.pop(),
#     'reverse': lambda: list_.reverse(),
# }
# for operation in operations:
#     name, args = [i.strip() for i in (operation + ' ').split(' ', maxsplit=1)]
#     command = commands.get(name)
#     command(*args.split())


# n = input()
# l = []
# for _ in range(n):
#     s = raw_input().split()
#     cmd = s[0]
#     args = s[1:]
#     if cmd !="print":
#         cmd += "("+ ",".join(args) +")"
#         eval("l."+cmd)
#     else:
#         print l


# l = []
# for _ in range(int(raw_input())):
#     line = raw_input().strip()
#     if line == "print":
#         print l
#         continue
#     parts = line.split()
#     getattr(l, parts[0])(*(map(int, parts[1:])))
