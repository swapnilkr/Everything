# https://www.facebook.com/anurmehta/posts/433223845629474
#subscibed by ankurgaming

# Sum of natural numbers up to num

num = 16

if num < 0:
   print("Enter a positive number")
else:
   sum = 0
   # use while loop to iterate until zero
   while(num > 0):
       sum += num
       num -= 1
   print("The sum is", sum)
