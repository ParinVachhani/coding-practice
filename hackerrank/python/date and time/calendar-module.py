import calendar

if __name__ == '__main__':
	m,d,y = map(int,input().split())
	print(calendar.day_name[calendar.weekday(y, m, d)].upper())
