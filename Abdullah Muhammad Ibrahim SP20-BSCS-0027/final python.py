# num = input("Enter character: ")
# n=int(input("enter the number of rows:"))
# for i in range(n): 
#   print(" "*(n-1-i)+num*(i+1))


num = int(input("Enter the number: "))
count = 0
num1 = 0
while(num >= 1):
    count = count + 1
    num1 = num1 + num
    avg = num1/count
    num = int(input("Enter the number: "))
print("Final Average: ", avg)
