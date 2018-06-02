if __name__ == '__main__':
	n = int(input())
	collection = set()
	for _ in range(n):
		collection.add(input().strip())
	print(len(collection))

# print(len(set([str(input()) for x in range(int(input()))])))