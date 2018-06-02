from itertools import product

def func(nums):
    return sum(x**2 for x in nums) % M

if __name__ == '__main__':
	K, M = map(int,input().split())
	arrayN = (list(map(int, input().split()))[1:] for _ in range(K))
	possible_combination = list(product(*arrayN))
	print(max(list(map(func, possible_combination))))

# K,M = map(int,input().split())
# N = (list(map(int, input().split()))[1:] for _ in range(K))
# results = map(lambda x: sum(i**2 for i in x)%M, product(*N))
# print(max(results))
