#state space reduction

#https://www.hackerearth.com/practice/algorithms/dynamic-programming/state-space-reduction/practice-problems/algorithm/aeroplanes-scheduling-7df0c65c/

# Aeroplanes Scheduling -- Python

'''
# Sample code to perform I/O:
 
name = input()                  # Reading input from STDIN
print('Hi, %s.' % name)         # Writing output to STDOUT
 
# Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
'''
 
# Write your code here
n=int(input())
ar=list(map(int,input().split()))
l1=[ar[0]]
l2=[0]*(n)
for i in range(1,n):
    if(ar[i]<=l1[-1]):
        l1.append(ar[i])
    else:
        j=i-1
        ma=0
        while(j>=0):
            if(ar[j]>=ar[i]):
                if(l2[j]>ma):
                    ma=l2[j]
            j=j-1
        if(ma!=0):
            l2[i]=ma+1
        else:
            l2[i]=1
    #print(i,ar[i],l1,l2[i:i+1])
print(len(l1)+max(l2))