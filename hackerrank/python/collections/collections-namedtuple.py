from collections import namedtuple
if __name__ == '__main__':
	N = int(input())
	fields = input().split()
	Student = namedtuple('Student',fields)
	total = 0
	for i in range(N):
	    field1,field2,field3,field4 = input().split()
	    s = Student(field1,field2,field3,field4)
	    total += int(s.MARKS)
	print('{:.2f}'.format(total/N))

# import collections, statistics
# print('%.2f' % statistics.mean(next((int(student(*row).MARKS) for row in (input().split() for i in range(size))) for size, student in [[int(input()), collections.namedtuple('Student', input())]])))

# stu, marks = int(input()), input().split().index("MARKS")
# print (sum([int(input().split()[marks]) for _ in range(stu)]) / stu)
