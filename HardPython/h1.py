
for i in range(50,80):
    if i%2==0:
        print(i)

'''n=(int(input("Enter the number:")))
sum=0
for i in range(0,n+1):
    sum=sum+i

print(sum)'''

'''n1=int(input("Enter the number"))

for i in range(2,n1):
    if n1%i==0 & n1-1==i:
        print("the number is prime")
    elif n1%i==0:
        pass
       # print("the number is not prime")'''

s=input("Enter the string:")
s1=s[::-1]
if s1==s:
    print("the string is palindrome")
else:
    print("th string is not  Palindrome")

str1="I Like Python"
str2=" I Like Java"

str3=str1+str2

