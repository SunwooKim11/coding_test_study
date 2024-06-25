import sys	

# print(sys.stdin.read()) # ans 1

# ans 2
while True:
    try:
        print(input())
    except EOFError:
        break


# boj 11719 그대로 출력하기2 -> 공백 포함하여서
# ref) https://minwin.tistory.com/8
# [풀이]
# 입력이 계속 주어지다 EOF (End Of File)에 도달하면 프로그램이 중단된다.

# [정답1]의 sys.stdin.read()는 EOF 전까지 여러줄을 문자열로 입력받는다.
# 따라서 별도의 조건 없이 한줄로 해결 가능하다.

# [정답2]에서는 while 반복문을 이용하여 EOF일때 break하여 종료한다.
# try except로 EOF Error 상황에서 반복문을 탈출한다.