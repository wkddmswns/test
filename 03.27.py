# IF 조건문 (참일때만 수행)
a = int(input("가격을입력하세요"))
if  a>100 :
 print(f"100보다 크다")
else :
  print(f"100이거나 100보다 작은 수 입니다")

a = int(input("정수를 입력하세요"))

if a != 0 and a%2!=0:
  print("홀수입니다")


a = int(input("숫자를 입력하세요: ")) 

if a == 0: 
    print("입력한 숫자는 0입니다")
elif a < 0: 
    print("입력한 숫자는 0보다 작습니다.")
elif a > 0:  
    print("입력한 숫자는 0보다 큽니다")



a = int(input("값을 입력하세요"))  
b = int(input("값을 입력하세요"))  

if a == b:
   print("a값과 b의값은 같습니다")

elif a < b:
   print("a값은 b값보다 작습니다 ")   
  
elif a > b:
    print("a의값은 b값보다 큽니다")



a = int(input("a를 입력하세요: ")) 
b = int(input("b를 입력하세요: ")) 
c = int(input("c를 입력하세요: ")) 

max_num = a

if b > max_num: 
    max_num = b 
if c > max_num: 
    max_num = c 
    print("최대값은",max_num)


a = int(input("값을 입력하세요"))

if a>100:
    print("a는100보다 큰수입니다")
elif a > 50-100:
    print("a는 50-100 사이 수 입니다")
elif a <50:
    print("a는 50보다 작은수 입니다")    
    








