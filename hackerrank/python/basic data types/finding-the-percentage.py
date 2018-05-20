if __name__ == '__main__':
    n = int(input())
    student_marks = {}
    for _ in range(n):
        name, *line = input().split()
        scores = list(map(float, line))
        student_marks[name] = scores
    query_name = input()
    avg = float(sum(student_marks[query_name]))/max(len(student_marks[query_name]), 2)
    print("{:.2f}".format(avg))
