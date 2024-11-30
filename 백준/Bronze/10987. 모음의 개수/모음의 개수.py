word = input()
vowel = ['a', 'e', 'i', 'o', 'u']
vowel_cnt = 0

for w in word:
    vowel_cnt = vowel_cnt+1 if(w in vowel) else vowel_cnt
print(vowel_cnt)