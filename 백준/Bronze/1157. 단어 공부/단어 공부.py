text=input()
text=text.upper()
dic={}

for i in text:
    if not i in dic:
        dic[i]=text.count(i)
maxV=max(dic.values())
cnt=-1
for i in dic.values():
    if maxV==i:
        cnt+=1
if not cnt:
    for i, j in dic.items():
        if j==maxV:
            print(i)
else:
    print("?")

