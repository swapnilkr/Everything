#https://www.facebook.com/roshan.philipines/posts/2769055946717382
#Subscribed by Roshaen
#guess the number
i=0
n=21
while(i<10):
    print("You have " + str(10-i) +" chance left")
    inp= int(input("Please Enter a number you have gussed "))
    
    if inp==int(n):
        print("You won in "+ str(i+1)+"th guess")
        break
    else:
        if inp<int(n):
            print("wrong!!\n You choosen a smaller number")
            
        else:
            print("wrong!!\n You choosen a greater number")
            
    i+=1
    if i==10:
        print("game over!!! You lose")
        break


