def capitalize(s):
    for x in s[:].split():
        s = s.replace(x, x.capitalize())
    return s

# def capitalize(s):
# 	return ' '.join(map(s.capitalize, string.split(' ')))
# 	return ' '.join([x.capitalize() for x in input().split(' ')])
# 	
if __name__ == '__main__':
    string = input()
    capitalized_string = capitalize(string)
    print(capitalized_string)