ans_month = 2; ans_day = 18

month = int(input())
day = int(input())

if(month<ans_month):
    print("Before")
elif(month == ans_month):
    if(day < ans_day):
        print("Before")
    elif(day == ans_day):
        print("Special")
    else:
        print("After")
else:
    print("After")