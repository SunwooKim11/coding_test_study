word = input().lower()
showed = [0]*26
for letter in word:
    showed[ord(letter)-97] +=1

print(str(showed).replace(',', '').replace('[', '').replace(']',''))
