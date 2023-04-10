# 반복문
# for i in range(1,11):
#     for j in range(1,11):
#         for k in range(1,11):
#           print(f"{i=}{j=}{k=}")
#           a = int(input("구구단 3단을 출력하세요"))
# for i in range(1,10):
#     print(f"{a} * {i} = {a*i}")

# a = int(input("단수를 입력하세요 :"))
# for i in range(1,10):
#    print("f{a:2d} * {i:2d} = {a*i3d} ", end="")
#    if i%3 == 0:
#        print("")
# for i in range(2,10):
#     print(f"<{i}단>")
#     for j in range(1,10):
#         # print(f"{i}*{j}" , {i * j})

#         print(f"{i:2d} * {j:2d} = {i*j:3d}  ",end="")  
#         if j%3==0:
#             print("")
#             print("")
   
# for i in range(2, 10):
#     print("== %d단 ==" % i)
#     for j in range(1, 10):
#         print("%d * %d = %2d" % (i, j, i*j))
#     print()

# sum = 0
# i = 1
# while i!= 100:
#    sum = sum + i

# print(f"{sum}")

# num= 0
# while True :
#     i=(input("더할수있는 수를 적으시오 = 을 적으면 종료"))
#     if i == '=':
#         print(f"{num}\n 끝")
#         break
#     else:
        
#         num=num+int(i)
#         print(f"{num}")
              
# 에러 처리

# while True:
#     try:

#      a =int(input("나누기를 할 정수를 입력하세요:"))
#      b = int(input("나누어질 수를 입력하세요"))
#      print(a/b)
#     except :
#        print("예외가 발생")
# num = 0
# while True:
#     try:
#        i= (input(" 입력되는 모든수를 더하세요 = 이입력되면 종료"))
#        if i == '=':
#         print(f"{num}\n 끝")
#         break

#        else:
#         num=num+int(i)
#     except :
#      print("숫자가아님 다시입력")
    