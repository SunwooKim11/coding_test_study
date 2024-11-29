
line = input()
names = list()
depts = list()
while line != "# 0 0":
    name, age, weight = line.split(' ')
    names.append(name)
    age = int(age)
    weight = int(weight)
    if (age>17 or weight >=80):
        depts.append('Senior')
    else:
        depts.append('Junior')

    line = input()

for i in range(len(names)):
    print("{} {}".format(names[i], depts[i]))