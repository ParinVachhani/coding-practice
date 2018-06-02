def average(arr):
    avg = float(sum(set(arr))/len(set(arr)))
    return "{:.3f}".format(avg)

if __name__ == '__main__':
    n = int(input())
    arr = list(map(int, input().split()))
    result = average(arr)
    print(result)