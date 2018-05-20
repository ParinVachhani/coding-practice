from operator import itemgetter

if __name__ == '__main__':
    students = []
    for _ in range(int(input())):
        name = input()
        score = float(input())
        students.append([name,score])
    students.sort(key=itemgetter(1), reverse=True)
    lowest_marks = students[-1][1]
    while students[-1][1] == lowest_marks:
        students.pop()
    students.sort(key=itemgetter(1))
    sec_low_marks = students[0][1]
    sec_low_students = [name for name, marks in students if marks == sec_low_marks]
    sec_low_students.sort()
    print(*sec_low_students, sep='\n')

# marksheet = []
# for _ in range(0,int(input())):
#     marksheet.append([input(), float(input())])
# second_highest = sorted(list(set([marks for name, marks in marksheet])))[1]
# print('\n'.join([a for a,b in sorted(marksheet) if b == second_highest]))

# n = int(raw_input())
# marks = [[raw_input(), float(raw_input())] for i in  xrange(n)]           
# scores = sorted({s[1] for s in marks})
# result = sorted(s[0] for s in marks if s[1] == scores[1])
# print '\n'.join(result)

# a= []
# for _ in range(int(input())):
#     name = input()
#     score = float(input())
#     a.append([score, name])
# a.sort()
# b = [i for i in a if i[0] != a[0][0]]
# c = [j for j in b if j[0] == b[0][0]]
# c.sort(key=lambda x: x[1])
# for i in range(len(c)):
#     print(c[i][1])

# students = []
# for _ in range(int(input())):
#     name = input()
#     score = float(input())
#     students.append([name,score])

# second_high = sorted(set([i[1] for i in students]))[1]
# print("\n".join(sorted([i[0] for i in students if i[1] == second_high])))