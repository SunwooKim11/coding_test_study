sen_list = []
sen = input()
while(sen!="END"):
    sen_list.append(sen)
    sen=input()
for s in sen_list:
    print(s[::-1])