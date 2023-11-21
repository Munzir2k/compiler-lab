str1 = "hello"
str2 = "world!"
result = ""
# concatination
result = str1+str2
print(f"Concatination of str1 and str2{result}")

# length
l = 0
for i in range(len(str1)):
    l += 1
print(f"Length of str1: {l}")

# substring
substirng = ""
for i in range(2,5):
    substirng += str1[i]
print(f"Substring{substirng}")

# String copy
copy = ""
copy = str1
print(copy)

# Reverse
print(str1[::-1])

# string comparison
str3 = "Hello"
if (str1 == str3):
    is_equal = True
else:
    is_equal=False
print(f"Is equal?: {is_equal}")

# UpperCase
upper = ''
for char in str1:
    if 'a'<= char <='z':
        upper += chr(ord(char)-ord('a')+ord('A'))
    else:
        upper += char
print(f"Uppercase: {upper}")

# Lowercase
lower = ''
for char in upper:
    if 'A'<=char<='z':
        lower += chr(ord(char)-ord('A')+ord('a'))
    else:
        lower += char
print(f"Lowercase: {lower}")

# Counting charecter
count = 0
for i in str1:
    if i == 'l':
        count += 1
print(f"Count of L: {count}")

# Palindrome
if (str1 == str1[::-1]):
    print("is Palindrome")
else:
    print("Not palindrome")