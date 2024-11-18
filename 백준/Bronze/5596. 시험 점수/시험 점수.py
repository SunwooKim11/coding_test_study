s_list = list(map(int, input().split()))
t_list = list(map(int, input().split()))
result = sum(s_list)if sum(s_list)>=sum(t_list) else sum(t_list)

print(result)