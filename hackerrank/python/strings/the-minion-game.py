def minion_game(s):
    vowels = 'AEIOU'
    kevin = 0
    stuart = 0
    for i in range(len(s)):
        if s[i] in vowels:
            kevin += (len(s)-i)
        else:
            stuart += (len(s)-i)
    if kevin > stuart:
        print("Kevin %d" % (kevin))
    elif kevin < stuart:
        print("Stuart %d" % (stuart))
    else:
        print("Draw")

if __name__ == '__main__':
    string = input()
    minion_game(string)