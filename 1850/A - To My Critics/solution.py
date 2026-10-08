t =int(input())
for _ in range (t):
 a,b,c = map(int,input().split())
 if a+b>=10:
    print("yes")
 elif b+c>=10:
    print("yes")
 elif a+c>=10:
    print("yes")
 else:
    print("no")            
    #code by ishi lol